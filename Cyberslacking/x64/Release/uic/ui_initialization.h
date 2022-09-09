/********************************************************************************
** Form generated from reading UI file 'initialization.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITIALIZATION_H
#define UI_INITIALIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InitializationClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *hour_label;
    QLabel *day_label;
    QSpinBox *day_spinBox;
    QLabel *income_label;
    QSpinBox *income_spinBox;
    QPushButton *reset_pushButton;
    QPushButton *confirm_pushButton;
    QDoubleSpinBox *hour_doubleSpinBox;

    void setupUi(QWidget *InitializationClass)
    {
        if (InitializationClass->objectName().isEmpty())
            InitializationClass->setObjectName(QString::fromUtf8("InitializationClass"));
        InitializationClass->resize(243, 191);
        layoutWidget = new QWidget(InitializationClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 225, 171));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        hour_label = new QLabel(layoutWidget);
        hour_label->setObjectName(QString::fromUtf8("hour_label"));

        gridLayout->addWidget(hour_label, 0, 0, 1, 1);

        day_label = new QLabel(layoutWidget);
        day_label->setObjectName(QString::fromUtf8("day_label"));

        gridLayout->addWidget(day_label, 1, 0, 1, 1);

        day_spinBox = new QSpinBox(layoutWidget);
        day_spinBox->setObjectName(QString::fromUtf8("day_spinBox"));
        day_spinBox->setMinimum(1);
        day_spinBox->setMaximum(31);

        gridLayout->addWidget(day_spinBox, 1, 1, 1, 1);

        income_label = new QLabel(layoutWidget);
        income_label->setObjectName(QString::fromUtf8("income_label"));

        gridLayout->addWidget(income_label, 2, 0, 1, 1);

        income_spinBox = new QSpinBox(layoutWidget);
        income_spinBox->setObjectName(QString::fromUtf8("income_spinBox"));
        income_spinBox->setMinimum(1);
        income_spinBox->setMaximum(1000000);
        income_spinBox->setSingleStep(100);
        income_spinBox->setValue(1);

        gridLayout->addWidget(income_spinBox, 2, 1, 1, 1);

        reset_pushButton = new QPushButton(layoutWidget);
        reset_pushButton->setObjectName(QString::fromUtf8("reset_pushButton"));

        gridLayout->addWidget(reset_pushButton, 3, 0, 1, 1);

        confirm_pushButton = new QPushButton(layoutWidget);
        confirm_pushButton->setObjectName(QString::fromUtf8("confirm_pushButton"));

        gridLayout->addWidget(confirm_pushButton, 3, 1, 1, 1);

        hour_doubleSpinBox = new QDoubleSpinBox(layoutWidget);
        hour_doubleSpinBox->setObjectName(QString::fromUtf8("hour_doubleSpinBox"));
        hour_doubleSpinBox->setDecimals(1);
        hour_doubleSpinBox->setMinimum(1.000000000000000);
        hour_doubleSpinBox->setMaximum(24.000000000000000);
        hour_doubleSpinBox->setSingleStep(0.100000000000000);

        gridLayout->addWidget(hour_doubleSpinBox, 0, 1, 1, 1);


        retranslateUi(InitializationClass);

        QMetaObject::connectSlotsByName(InitializationClass);
    } // setupUi

    void retranslateUi(QWidget *InitializationClass)
    {
        InitializationClass->setWindowTitle(QApplication::translate("InitializationClass", "Initialization", nullptr));
        hour_label->setText(QApplication::translate("InitializationClass", "\344\270\212\347\217\255\346\227\266\351\225\277(\345\260\217\346\227\266)", nullptr));
        day_label->setText(QApplication::translate("InitializationClass", "\344\270\212\347\217\255\345\244\251\346\225\260(\345\244\251)", nullptr));
        income_label->setText(QApplication::translate("InitializationClass", "\350\226\252\351\205\254(\345\205\203)", nullptr));
        reset_pushButton->setText(QApplication::translate("InitializationClass", "\351\207\215\347\275\256", nullptr));
        confirm_pushButton->setText(QApplication::translate("InitializationClass", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InitializationClass: public Ui_InitializationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITIALIZATION_H
