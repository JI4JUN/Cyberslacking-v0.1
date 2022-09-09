/********************************************************************************
** Form generated from reading UI file 'currentuserdatawidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURRENTUSERDATAWIDGET_H
#define UI_CURRENTUSERDATAWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CurrentUserDataWidgetClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *cur_income_lineEdit;
    QLineEdit *cur_hourly_lineEdit;
    QLineEdit *cur_hour_lineEdit;
    QLabel *cur_income_label;
    QLabel *cur_hourly_label;
    QLineEdit *cur_days_lineEdit;
    QLineEdit *cur_daily_lineEdit;
    QLabel *cur_daily_label;
    QLabel *cur_days_label;
    QLabel *cur_hour_label;

    void setupUi(QWidget *CurrentUserDataWidgetClass)
    {
        if (CurrentUserDataWidgetClass->objectName().isEmpty())
            CurrentUserDataWidgetClass->setObjectName(QString::fromUtf8("CurrentUserDataWidgetClass"));
        CurrentUserDataWidgetClass->resize(210, 210);
        layoutWidget = new QWidget(CurrentUserDataWidgetClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 191, 191));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        cur_income_lineEdit = new QLineEdit(layoutWidget);
        cur_income_lineEdit->setObjectName(QString::fromUtf8("cur_income_lineEdit"));
        cur_income_lineEdit->setReadOnly(true);

        gridLayout->addWidget(cur_income_lineEdit, 2, 1, 1, 1);

        cur_hourly_lineEdit = new QLineEdit(layoutWidget);
        cur_hourly_lineEdit->setObjectName(QString::fromUtf8("cur_hourly_lineEdit"));
        cur_hourly_lineEdit->setReadOnly(true);

        gridLayout->addWidget(cur_hourly_lineEdit, 4, 1, 1, 1);

        cur_hour_lineEdit = new QLineEdit(layoutWidget);
        cur_hour_lineEdit->setObjectName(QString::fromUtf8("cur_hour_lineEdit"));
        cur_hour_lineEdit->setReadOnly(true);

        gridLayout->addWidget(cur_hour_lineEdit, 0, 1, 1, 1);

        cur_income_label = new QLabel(layoutWidget);
        cur_income_label->setObjectName(QString::fromUtf8("cur_income_label"));

        gridLayout->addWidget(cur_income_label, 2, 0, 1, 1);

        cur_hourly_label = new QLabel(layoutWidget);
        cur_hourly_label->setObjectName(QString::fromUtf8("cur_hourly_label"));

        gridLayout->addWidget(cur_hourly_label, 4, 0, 1, 1);

        cur_days_lineEdit = new QLineEdit(layoutWidget);
        cur_days_lineEdit->setObjectName(QString::fromUtf8("cur_days_lineEdit"));
        cur_days_lineEdit->setReadOnly(true);

        gridLayout->addWidget(cur_days_lineEdit, 1, 1, 1, 1);

        cur_daily_lineEdit = new QLineEdit(layoutWidget);
        cur_daily_lineEdit->setObjectName(QString::fromUtf8("cur_daily_lineEdit"));
        cur_daily_lineEdit->setReadOnly(true);

        gridLayout->addWidget(cur_daily_lineEdit, 3, 1, 1, 1);

        cur_daily_label = new QLabel(layoutWidget);
        cur_daily_label->setObjectName(QString::fromUtf8("cur_daily_label"));

        gridLayout->addWidget(cur_daily_label, 3, 0, 1, 1);

        cur_days_label = new QLabel(layoutWidget);
        cur_days_label->setObjectName(QString::fromUtf8("cur_days_label"));

        gridLayout->addWidget(cur_days_label, 1, 0, 1, 1);

        cur_hour_label = new QLabel(layoutWidget);
        cur_hour_label->setObjectName(QString::fromUtf8("cur_hour_label"));

        gridLayout->addWidget(cur_hour_label, 0, 0, 1, 1);


        retranslateUi(CurrentUserDataWidgetClass);

        QMetaObject::connectSlotsByName(CurrentUserDataWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *CurrentUserDataWidgetClass)
    {
        CurrentUserDataWidgetClass->setWindowTitle(QApplication::translate("CurrentUserDataWidgetClass", "CurrentUserDataWidget", nullptr));
        cur_income_label->setText(QApplication::translate("CurrentUserDataWidgetClass", "\350\226\252\351\205\254(\345\205\203)", nullptr));
        cur_hourly_label->setText(QApplication::translate("CurrentUserDataWidgetClass", "\346\240\207\345\207\206\346\227\266\350\226\252(\345\205\203)", nullptr));
        cur_daily_label->setText(QApplication::translate("CurrentUserDataWidgetClass", "\346\240\207\345\207\206\346\227\245\350\226\252(\345\205\203)", nullptr));
        cur_days_label->setText(QApplication::translate("CurrentUserDataWidgetClass", "\344\270\212\347\217\255\345\244\251\346\225\260(\345\244\251)", nullptr));
        cur_hour_label->setText(QApplication::translate("CurrentUserDataWidgetClass", "\344\270\212\347\217\255\346\227\266\351\225\277(\345\260\217\346\227\266)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CurrentUserDataWidgetClass: public Ui_CurrentUserDataWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRENTUSERDATAWIDGET_H
