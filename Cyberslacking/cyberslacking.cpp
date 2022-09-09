#include "cyberslacking.h"
#include "globalsignaltable.h"
#include "initialization.h"
#include <QButtonGroup>
#include <QTextCodec>
#include "utils.h"

Cyberslacking::Cyberslacking(QWidget* parent)
	: QWidget(parent)
	, ui(new Ui::CyberslackingClass())
	, wState(new CurrentState())
	, sState(new CurrentState())
{
	ui->setupUi(this);

	// 固定窗口大小
	setFixedSize(292, 300);

	// lineEdit只读
	make_lineEdit_readOnly();

	// 显示时间
	curTime_update();

	// 点击初始化按钮
	init_pushButton_clicked();
	// 接受初始化窗口后展示出来
	res_init_pushButton();
	// 点击当前信息按钮
	current_pushButton_clicked();
	// 接受当前信息窗口后展示出来
	res_current_pushButton();

	// 点击上班按钮
	work_pushButton_clicked();
}

Cyberslacking::~Cyberslacking()
{
	delete ui;
}

void Cyberslacking::make_lineEdit_readOnly()
{
	for (auto lineEdit : this->findChildren<QLineEdit*>())
		lineEdit->setReadOnly(true);
}

void Cyberslacking::curTime_update()
{
	QTimer* timer = new QTimer(this);
	timer->singleShot(0, this, &Cyberslacking::time_update);
	timer->start(60 * 1000); // 每60s发送一次timeout信号
	connect(
		timer,
		&QTimer::timeout,
		this,
		&Cyberslacking::time_update
	);
}

void Cyberslacking::time_update()
{
	QDateTime current_time = QDateTime::currentDateTime();
	QString timestr = current_time.toString("hh:mm");
	ui->time_label->setText(timestr);
}

void Cyberslacking::init_pushButton_clicked()
{
	connect(
		ui->init_pushButton,
		&QPushButton::clicked,
		this,
		[=]()
		{
			Initialization* initWgt = new Initialization();
			emit GlobalSignalTable::getInstance()->res_init_pushButton_signal(initWgt);
		}
	);
}

void Cyberslacking::res_init_pushButton()
{
	connect(
		GlobalSignalTable::getInstance(),
		&GlobalSignalTable::req_init_pushButton_signal,
		this,
		&Cyberslacking::res_init_pushButton_clicked
	);
}

void Cyberslacking::current_pushButton_clicked()
{
	connect(
		ui->current_pushButton,
		&QPushButton::clicked,
		this,
		[=]()
		{
			CurrentUserDataWidget* curWgt = new CurrentUserDataWidget();
			emit GlobalSignalTable::getInstance()->res_current_pushButton_signal(curWgt);
		}
	);
}

void Cyberslacking::res_current_pushButton()
{
	connect(
		GlobalSignalTable::getInstance(),
		&GlobalSignalTable::req_current_pushButton_signal,
		this,
		&Cyberslacking::res_current_pushButton_clicked
	);
}

void Cyberslacking::work_pushButton_clicked()
{
	connect(
		ui->work_pushButton,
		&QPushButton::clicked,
		this,
		&Cyberslacking::work_start
	);
}

void Cyberslacking::transToTotalItem(double wStateTime, double sStateTime, double wStateIncome, double sStateIncome)
{
	double totalTime = wStateTime + sStateTime;
	double totalIncome = (wStateIncome * wStateTime
		+ wStateIncome * sStateTime) / 3600;
	double unitIncome = totalIncome / wStateTime * 3600;

	ui->total_duration_lineEdit->setText(sec2data(totalTime));
	ui->total_income_lineEdit->setText(QString::number(totalIncome, 'd', 2));
	ui->unit_work_income_lineEdit->setText(QString::number(unitIncome, 'd', 2));
}

void Cyberslacking::res_current_pushButton_clicked(CurrentUserDataWidget* curWgt)
{
	Q_ASSERT(GlobalSignalTable::getInstance() != nullptr);

	curWgt->show();
}

void Cyberslacking::work_start()
{
	ui->work_pushButton->blockSignals(true);

	// 获得开始上班时间
	wState->startTime = QDateTime::currentDateTime();

	connect(
		ui->work_radioButton,
		&QRadioButton::toggled,
		[=]()
		{
			if (ui->work_radioButton->isChecked())
			{
				wState->start(1000);
				connect(
					wState,
					&QTimer::timeout,
					[=]()
					{
						wState->workingTime++;
						ui->work_time_lineEdit->setText(sec2data(wState->workingTime));
						ui->work_income_lineEdit->setText(
							QString::number(wState->getIncome() / 3600 * wState->workingTime, 'd', 2)
						);
						transToTotalItem(
							wState->workingTime,
							sState->workingTime,
							wState->getIncome(),
							sState->getIncome()
						);
					}
				);

				sState->disconnect(SIGNAL(timeout()));
			}
			else
			{
				sState->start(1000);
				connect(
					sState,
					&QTimer::timeout,
					[=]()
					{
						sState->workingTime++;
						ui->slack_time_lineEdit->setText(sec2data(sState->workingTime));
						ui->slack_income_lineEdit->setText(
							QString::number(sState->getIncome() / 3600 * sState->workingTime, 'd', 2)
						);
						transToTotalItem(
							wState->workingTime,
							sState->workingTime,
							wState->getIncome(),
							sState->getIncome()
						);
					}
				);

				wState->disconnect(SIGNAL(timeout()));
			}
		}
	);
	emit ui->work_radioButton->toggled(true);
}

void Cyberslacking::on_offwork_pushButton_clicked()
{
	sState->disconnect(SIGNAL(timeout()));
	wState->disconnect(SIGNAL(timeout()));
	// 获得开始下班时间
	wState->finishTime = QDateTime::currentDateTime();
	QString startTimeStr = wState->startTime.toString("yyyy:MM:dd  hh:mm:ss");
	QString finishTimeStr = wState->finishTime.toString("yyyy:MM:dd  hh:mm:ss");

	QFile saveFile("./save.txt");
	if (!saveFile.exists())
	{
		qDebug() << "文件不存在，创建一个txt文件";
		saveFile.open(QIODevice::Append);
		saveFile.close();
	}

	if (saveFile.open(QIODevice::Append | QIODevice::Text))
	{
		QTextStream out(&saveFile); // IO设备对象的地址对其进行初始化
		out.setCodec("UTF-8");
		out << QString("上班时间:   ") << startTimeStr
			<< QString("   下班时间:   ") << finishTimeStr << "\n"
			<< QString("上班时长:   ") << sec2data((wState->startTime).secsTo(wState->finishTime))
			<< QString("   搬砖时长:   ") << ui->work_time_lineEdit->text()
			<< QString("   摸鱼时长:   ") << ui->slack_time_lineEdit->text() << "\n"
			<< QString("到手:   ") << ui->total_income_lineEdit->text() << QString("元")
			<< QString("   搬砖收入:   ") << ui->work_income_lineEdit->text() << QString("元")
			<< QString("   摸鱼收入:   ") << ui->slack_income_lineEdit->text() << QString("元") << "\n"
			<< QString("打工收益高达每小时: ") << ui->unit_work_income_lineEdit->text() << QString("元!!!") << "\n"
			<< QString("**********************************************") << "\n";
		saveFile.close();
	}
	else
		qDebug() << "文件打开失败";

	close();
}

void Cyberslacking::res_init_pushButton_clicked(Initialization* initWgt)
{
	Q_ASSERT(GlobalSignalTable::getInstance() != nullptr);

	initWgt->show();
}