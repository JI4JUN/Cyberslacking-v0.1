#pragma once

#include <QtWidgets/QWidget>
#include <QTimer>
#include <QDateTime>
#include <QFile>
#include "ui_cyberslacking.h"
#include "initialization.h"
#include "currentstate.h"
#include "currentuserdatawidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class CyberslackingClass; };
QT_END_NAMESPACE

class Cyberslacking : public QWidget
{
    Q_OBJECT

public:
    Cyberslacking(QWidget *parent = nullptr);
    ~Cyberslacking();

public:
    // lineEdit只读
    void make_lineEdit_readOnly();

    // 实时更新时间
    void curTime_update();

    // 发送点击初始化按钮的信号
    void init_pushButton_clicked();
    // 接受初始化窗口信号
    void res_init_pushButton();
    // 发送点击当前信息按钮的信号
    void current_pushButton_clicked();
    // 接受当前信息窗口信号
    void res_current_pushButton();

    // 点击上班按钮
    void work_pushButton_clicked();
    void transToTotalItem(double wStateTime, double sStateTime, double wStateIncome, double sStateIncome);

private slots:
    // 时间更新槽函数
    void time_update();
    // 接受初始化窗口信号后展示出来
    void res_init_pushButton_clicked(Initialization* initWgt);
    // 接受当前信息窗口信号后展示出来
    void res_current_pushButton_clicked(CurrentUserDataWidget* curWgt);

    // 点击上班按钮
    void work_start();

    // 点击下班按钮
    void on_offwork_pushButton_clicked();

private:
    Ui::CyberslackingClass *ui;
    CurrentState* wState;
    CurrentState* sState;
};
