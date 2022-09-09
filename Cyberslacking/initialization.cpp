#include "initialization.h"
#include "globalsignaltable.h"
#include "userdata2json.h"

Initialization::Initialization(QWidget *parent)
	: QWidget(parent)
	, ui(new Ui::InitializationClass())
{
	ui->setupUi(this);

	// 固定窗口大小
	setFixedSize(243, 191);

	// 接受初始化信号请求
	req_init_pushButton();

	// 发送 点击确认后将用户数据保存至JSON文件并关闭窗口 请求
	confirm_pushButton_clicked();
}

Initialization::~Initialization()
{
	delete ui;
}

void Initialization::req_init_pushButton()
{
	connect(
		GlobalSignalTable::getInstance(),
		&GlobalSignalTable::res_init_pushButton_signal,
		this,
		&Initialization::req_init_pushButton_clicked
	);
}

void Initialization::confirm_pushButton_clicked()
{
	connect(
		ui->confirm_pushButton,
		&QPushButton::clicked,
		[&]()
		{
			UserData2Json* userdata = new UserData2Json(this);
			emit GlobalSignalTable::getInstance()->res_confirm_pushButton_clicked_signal(
				ui->hour_doubleSpinBox->value(),
				ui->day_spinBox->value(),
				ui->income_spinBox->value()
			);
			close();
		}
	);
}

void Initialization::req_init_pushButton_clicked(Initialization* initWgt)
{
	Q_ASSERT(GlobalSignalTable::getInstance() != nullptr);

	initWgt->setAttribute(Qt::WA_DeleteOnClose);
	initWgt->setWindowModality(Qt::ApplicationModal);

	emit GlobalSignalTable::getInstance()->req_init_pushButton_signal(initWgt);
}