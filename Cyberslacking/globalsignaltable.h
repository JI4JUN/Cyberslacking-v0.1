#pragma once

#include <QObject>
#include "initialization.h"
#include "currentuserdatawidget.h"

class GlobalSignalTable  : public QObject
{
	Q_OBJECT

public:

	~GlobalSignalTable();

	static GlobalSignalTable* getInstance();

signals:
	// 初始化信号的请求
	void res_init_pushButton_signal(Initialization* initWgt);
	// 初始化信号的响应
	void req_init_pushButton_signal(Initialization* initWgt);
	// 当前信息信号的请求
	void res_current_pushButton_signal(CurrentUserDataWidget* curWgt);
	// 当前信息信号的响应
	void req_current_pushButton_signal(CurrentUserDataWidget* curWgt);
	// 点击确认后将用户数据保存至JSON文件并关闭窗口 请求
	void res_confirm_pushButton_clicked_signal(double hour, double days, double income);

private:
	GlobalSignalTable(QObject* parent = nullptr);
	static GlobalSignalTable* instance;
};
