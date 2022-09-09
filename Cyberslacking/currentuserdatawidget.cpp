#include "globalsignaltable.h"
#include "currentuserdatawidget.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>

CurrentUserDataWidget::CurrentUserDataWidget(QWidget *parent)
	: QWidget(parent)
	, ui(new Ui::CurrentUserDataWidgetClass())
{
	ui->setupUi(this);

	// 固定窗口大小
	setFixedSize(210, 210);

	// 响应打开当前信息窗口的信号
	req_current_pushButton();
}

CurrentUserDataWidget::~CurrentUserDataWidget()
{
	delete ui;
}

void CurrentUserDataWidget::req_current_pushButton()
{
	connect(
		GlobalSignalTable::getInstance(),
		&GlobalSignalTable::res_current_pushButton_signal,
		this,
		&CurrentUserDataWidget::req_current_pushButton_clicked
	);
}

void CurrentUserDataWidget::current_pushButton_exjson()
{
	QFile jsfile("./userdata.json");
	if (!jsfile.exists())
	{
		qDebug() << "文件不存在";
		return;
	}
	if (jsfile.open(QIODevice::ReadOnly))
	{
		// 设置解析报错
		QJsonParseError err;
		// 解析Json文件
		QJsonDocument jsdoc = QJsonDocument::fromJson(jsfile.readAll(), &err);
		if (err.error != QJsonParseError::NoError)
		{
			qDebug() << "Json文件格式错误";
			return;
		}
		else
		{
			QJsonObject user = jsdoc.object();
			ui->cur_hour_lineEdit->setText(
				QString::number(user.value("hour").toDouble(), 'd', 1)
			);
			ui->cur_days_lineEdit->setText(
				QString::number(user.value("days").toInt())
			);
			ui->cur_income_lineEdit->setText(
				QString::number(user.value("income").toDouble(), 'd', 2)
			);
			ui->cur_daily_lineEdit->setText(
				QString::number(user.value("daily").toDouble(), 'd', 2)
			);
			ui->cur_hourly_lineEdit->setText(
				QString::number(user.value("hourly").toDouble(), 'd', 2)
			);
		}
	}
	jsfile.close();
}

void CurrentUserDataWidget::req_current_pushButton_clicked(CurrentUserDataWidget* curWgt)
{
	Q_ASSERT(GlobalSignalTable::getInstance() != nullptr);

	curWgt->setAttribute(Qt::WA_DeleteOnClose);
	curWgt->setWindowModality(Qt::ApplicationModal);
	curWgt->current_pushButton_exjson();

	emit GlobalSignalTable::getInstance()->req_current_pushButton_signal(curWgt);
}