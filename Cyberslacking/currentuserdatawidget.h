#pragma once

#include <QWidget>
#include "ui_currentuserdatawidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class CurrentUserDataWidgetClass; };
QT_END_NAMESPACE

class CurrentUserDataWidget : public QWidget
{
	Q_OBJECT

public:
	CurrentUserDataWidget(QWidget *parent = nullptr);
	~CurrentUserDataWidget();

public:
	// 响应打开当前信息窗口的信号
	void req_current_pushButton();
	// 点击当前信息将JSON文件解析并赋值到当前信息窗口
	void current_pushButton_exjson();

private slots:
	// 响应打开当前信息窗口
	void req_current_pushButton_clicked(CurrentUserDataWidget* curWgt);

private:
	Ui::CurrentUserDataWidgetClass *ui;
};
