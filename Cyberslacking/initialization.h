#pragma once

#include <QWidget>
#include "ui_initialization.h"
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class InitializationClass; };
QT_END_NAMESPACE

class Initialization : public QWidget
{
	Q_OBJECT

public:
	Initialization(QWidget *parent = nullptr);
	~Initialization();

public:
	// 响应打开初始化窗口的信号
	void req_init_pushButton();

	// 发送 点击确认后将用户数据保存至JSON文件并关闭窗口 请求
	void confirm_pushButton_clicked();

private slots:
	// 响应打开初始化窗口
	void req_init_pushButton_clicked(Initialization* initWgt);

	// 回应 点击确认后将用户数据保存至JSON文件并关闭窗口 请求
	//void res_confirm_pushButton_clicked();

private:
	Ui::InitializationClass *ui;
};
