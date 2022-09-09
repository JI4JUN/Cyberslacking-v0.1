/********************************************************************************
** Form generated from reading UI file 'cyberslacking.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CYBERSLACKING_H
#define UI_CYBERSLACKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CyberslackingClass
{
public:
    QGroupBox *worktime_groupBox;
    QLineEdit *work_time_lineEdit;
    QLineEdit *total_duration_lineEdit;
    QLineEdit *slack_time_lineEdit;
    QLabel *total_duration_label;
    QLabel *work_time_label;
    QLabel *slack_time_label;
    QLabel *add_label_1;
    QLabel *equal_label_1;
    QGroupBox *income_groupBox;
    QLineEdit *work_income_lineEdit;
    QLineEdit *total_income_lineEdit;
    QLineEdit *slack_income_lineEdit;
    QLabel *total_income_label;
    QLabel *work_income_label;
    QLabel *slack_income_label;
    QLabel *add_label_2;
    QLabel *equal_label_2;
    QLabel *unit_work_income_label;
    QLineEdit *unit_work_income_lineEdit;
    QLabel *unit_label;
    QPushButton *offwork_pushButton;
    QPushButton *init_pushButton;
    QPushButton *work_pushButton;
    QPushButton *current_pushButton;
    QLabel *time_label;
    QRadioButton *work_radioButton;
    QRadioButton *slack_radioButton;

    void setupUi(QWidget *CyberslackingClass)
    {
        if (CyberslackingClass->objectName().isEmpty())
            CyberslackingClass->setObjectName(QString::fromUtf8("CyberslackingClass"));
        CyberslackingClass->resize(291, 299);
        worktime_groupBox = new QGroupBox(CyberslackingClass);
        worktime_groupBox->setObjectName(QString::fromUtf8("worktime_groupBox"));
        worktime_groupBox->setGeometry(QRect(10, 40, 271, 71));
        work_time_lineEdit = new QLineEdit(worktime_groupBox);
        work_time_lineEdit->setObjectName(QString::fromUtf8("work_time_lineEdit"));
        work_time_lineEdit->setGeometry(QRect(100, 40, 71, 21));
        work_time_lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        total_duration_lineEdit = new QLineEdit(worktime_groupBox);
        total_duration_lineEdit->setObjectName(QString::fromUtf8("total_duration_lineEdit"));
        total_duration_lineEdit->setGeometry(QRect(10, 40, 71, 21));
        total_duration_lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        slack_time_lineEdit = new QLineEdit(worktime_groupBox);
        slack_time_lineEdit->setObjectName(QString::fromUtf8("slack_time_lineEdit"));
        slack_time_lineEdit->setGeometry(QRect(190, 40, 71, 21));
        slack_time_lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        total_duration_label = new QLabel(worktime_groupBox);
        total_duration_label->setObjectName(QString::fromUtf8("total_duration_label"));
        total_duration_label->setGeometry(QRect(10, 20, 71, 21));
        work_time_label = new QLabel(worktime_groupBox);
        work_time_label->setObjectName(QString::fromUtf8("work_time_label"));
        work_time_label->setGeometry(QRect(100, 20, 61, 21));
        slack_time_label = new QLabel(worktime_groupBox);
        slack_time_label->setObjectName(QString::fromUtf8("slack_time_label"));
        slack_time_label->setGeometry(QRect(190, 20, 72, 21));
        add_label_1 = new QLabel(worktime_groupBox);
        add_label_1->setObjectName(QString::fromUtf8("add_label_1"));
        add_label_1->setGeometry(QRect(176, 40, 16, 21));
        equal_label_1 = new QLabel(worktime_groupBox);
        equal_label_1->setObjectName(QString::fromUtf8("equal_label_1"));
        equal_label_1->setGeometry(QRect(87, 40, 16, 21));
        income_groupBox = new QGroupBox(CyberslackingClass);
        income_groupBox->setObjectName(QString::fromUtf8("income_groupBox"));
        income_groupBox->setGeometry(QRect(10, 110, 271, 121));
        work_income_lineEdit = new QLineEdit(income_groupBox);
        work_income_lineEdit->setObjectName(QString::fromUtf8("work_income_lineEdit"));
        work_income_lineEdit->setGeometry(QRect(100, 40, 71, 21));
        work_income_lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        total_income_lineEdit = new QLineEdit(income_groupBox);
        total_income_lineEdit->setObjectName(QString::fromUtf8("total_income_lineEdit"));
        total_income_lineEdit->setGeometry(QRect(10, 40, 71, 21));
        total_income_lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        slack_income_lineEdit = new QLineEdit(income_groupBox);
        slack_income_lineEdit->setObjectName(QString::fromUtf8("slack_income_lineEdit"));
        slack_income_lineEdit->setGeometry(QRect(190, 40, 71, 21));
        slack_income_lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        total_income_label = new QLabel(income_groupBox);
        total_income_label->setObjectName(QString::fromUtf8("total_income_label"));
        total_income_label->setGeometry(QRect(10, 20, 72, 21));
        work_income_label = new QLabel(income_groupBox);
        work_income_label->setObjectName(QString::fromUtf8("work_income_label"));
        work_income_label->setGeometry(QRect(100, 20, 72, 21));
        slack_income_label = new QLabel(income_groupBox);
        slack_income_label->setObjectName(QString::fromUtf8("slack_income_label"));
        slack_income_label->setGeometry(QRect(190, 20, 72, 21));
        add_label_2 = new QLabel(income_groupBox);
        add_label_2->setObjectName(QString::fromUtf8("add_label_2"));
        add_label_2->setGeometry(QRect(176, 40, 16, 21));
        equal_label_2 = new QLabel(income_groupBox);
        equal_label_2->setObjectName(QString::fromUtf8("equal_label_2"));
        equal_label_2->setGeometry(QRect(87, 40, 16, 21));
        unit_work_income_label = new QLabel(income_groupBox);
        unit_work_income_label->setObjectName(QString::fromUtf8("unit_work_income_label"));
        unit_work_income_label->setGeometry(QRect(10, 80, 91, 21));
        unit_work_income_lineEdit = new QLineEdit(income_groupBox);
        unit_work_income_lineEdit->setObjectName(QString::fromUtf8("unit_work_income_lineEdit"));
        unit_work_income_lineEdit->setGeometry(QRect(111, 70, 91, 41));
        unit_work_income_lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        unit_label = new QLabel(income_groupBox);
        unit_label->setObjectName(QString::fromUtf8("unit_label"));
        unit_label->setGeometry(QRect(210, 80, 51, 21));
        offwork_pushButton = new QPushButton(CyberslackingClass);
        offwork_pushButton->setObjectName(QString::fromUtf8("offwork_pushButton"));
        offwork_pushButton->setGeometry(QRect(160, 265, 121, 28));
        init_pushButton = new QPushButton(CyberslackingClass);
        init_pushButton->setObjectName(QString::fromUtf8("init_pushButton"));
        init_pushButton->setGeometry(QRect(10, 235, 121, 28));
        work_pushButton = new QPushButton(CyberslackingClass);
        work_pushButton->setObjectName(QString::fromUtf8("work_pushButton"));
        work_pushButton->setGeometry(QRect(160, 235, 121, 28));
        current_pushButton = new QPushButton(CyberslackingClass);
        current_pushButton->setObjectName(QString::fromUtf8("current_pushButton"));
        current_pushButton->setGeometry(QRect(10, 265, 121, 28));
        time_label = new QLabel(CyberslackingClass);
        time_label->setObjectName(QString::fromUtf8("time_label"));
        time_label->setGeometry(QRect(210, 10, 72, 31));
        work_radioButton = new QRadioButton(CyberslackingClass);
        work_radioButton->setObjectName(QString::fromUtf8("work_radioButton"));
        work_radioButton->setGeometry(QRect(10, 10, 61, 31));
        work_radioButton->setChecked(true);
        slack_radioButton = new QRadioButton(CyberslackingClass);
        slack_radioButton->setObjectName(QString::fromUtf8("slack_radioButton"));
        slack_radioButton->setGeometry(QRect(70, 10, 111, 31));

        retranslateUi(CyberslackingClass);

        QMetaObject::connectSlotsByName(CyberslackingClass);
    } // setupUi

    void retranslateUi(QWidget *CyberslackingClass)
    {
        CyberslackingClass->setWindowTitle(QApplication::translate("CyberslackingClass", "Cyberslacking", nullptr));
        worktime_groupBox->setTitle(QApplication::translate("CyberslackingClass", "\344\273\212\346\227\245\346\227\266\351\225\277", nullptr));
        total_duration_label->setText(QApplication::translate("CyberslackingClass", "\346\200\273\346\227\266\351\225\277", nullptr));
        work_time_label->setText(QApplication::translate("CyberslackingClass", "\346\220\254\347\240\226\346\227\266\351\225\277", nullptr));
        slack_time_label->setText(QApplication::translate("CyberslackingClass", "\346\221\270\351\261\274\346\227\266\351\225\277", nullptr));
        add_label_1->setText(QApplication::translate("CyberslackingClass", "+", nullptr));
        equal_label_1->setText(QApplication::translate("CyberslackingClass", "=", nullptr));
        income_groupBox->setTitle(QApplication::translate("CyberslackingClass", "\344\273\212\346\227\245\346\224\266\347\233\212", nullptr));
        total_income_label->setText(QApplication::translate("CyberslackingClass", "\346\200\273\346\224\266\347\233\212", nullptr));
        work_income_label->setText(QApplication::translate("CyberslackingClass", "\346\220\254\347\240\226\346\224\266\347\233\212", nullptr));
        slack_income_label->setText(QApplication::translate("CyberslackingClass", "\346\221\270\351\261\274\346\224\266\347\233\212", nullptr));
        add_label_2->setText(QApplication::translate("CyberslackingClass", "+", nullptr));
        equal_label_2->setText(QApplication::translate("CyberslackingClass", "=", nullptr));
        unit_work_income_label->setText(QApplication::translate("CyberslackingClass", "\345\215\225\344\275\215\346\220\254\347\240\226\346\224\266\347\233\212", nullptr));
        unit_label->setText(QApplication::translate("CyberslackingClass", "\345\205\203/\345\260\217\346\227\266", nullptr));
        offwork_pushButton->setText(QApplication::translate("CyberslackingClass", "\344\270\213\347\217\255", nullptr));
        init_pushButton->setText(QApplication::translate("CyberslackingClass", "\345\210\235\345\247\213\345\214\226\344\277\241\346\201\257", nullptr));
        work_pushButton->setText(QApplication::translate("CyberslackingClass", "\344\270\212\347\217\255", nullptr));
        current_pushButton->setText(QApplication::translate("CyberslackingClass", "\345\275\223\345\211\215\344\277\241\346\201\257", nullptr));
        time_label->setText(QApplication::translate("CyberslackingClass", "TextLabel", nullptr));
        work_radioButton->setText(QApplication::translate("CyberslackingClass", "\346\220\254\347\240\226", nullptr));
        slack_radioButton->setText(QApplication::translate("CyberslackingClass", "\346\221\270\351\261\274(\344\274\221\346\201\257)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CyberslackingClass: public Ui_CyberslackingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CYBERSLACKING_H
