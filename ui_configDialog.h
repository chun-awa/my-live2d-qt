/********************************************************************************
** Form generated from reading UI file 'configDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGDIALOG_H
#define UI_CONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QSlider *mouseSensibility;
    QLabel *mouseSensibilityValue;
    QLabel *labelMouseSensibility;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *widgetHeight;
    QLabel *labelX;
    QSpinBox *widgetWidth;
    QLabel *labelWidgetSize;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(670, 319);
        gridLayoutWidget = new QWidget(Dialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 671, 258));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mouseSensibility = new QSlider(gridLayoutWidget);
        mouseSensibility->setObjectName(QString::fromUtf8("mouseSensibility"));
        mouseSensibility->setMaximumSize(QSize(350, 16777215));
        mouseSensibility->setMinimum(1);
        mouseSensibility->setMaximum(20);
        mouseSensibility->setValue(10);
        mouseSensibility->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(mouseSensibility);

        mouseSensibilityValue = new QLabel(gridLayoutWidget);
        mouseSensibilityValue->setObjectName(QString::fromUtf8("mouseSensibilityValue"));
        mouseSensibilityValue->setMaximumSize(QSize(35, 16777215));

        horizontalLayout_3->addWidget(mouseSensibilityValue);


        gridLayout->addLayout(horizontalLayout_3, 3, 1, 1, 1);

        labelMouseSensibility = new QLabel(gridLayoutWidget);
        labelMouseSensibility->setObjectName(QString::fromUtf8("labelMouseSensibility"));
        labelMouseSensibility->setMargin(10);

        gridLayout->addWidget(labelMouseSensibility, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(30, 16777215));
        QFont font;
        font.setPointSize(8);
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMargin(10);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widgetHeight = new QSpinBox(gridLayoutWidget);
        widgetHeight->setObjectName(QString::fromUtf8("widgetHeight"));
        widgetHeight->setMinimum(200);
        widgetHeight->setMaximum(10000);

        horizontalLayout_2->addWidget(widgetHeight);

        labelX = new QLabel(gridLayoutWidget);
        labelX->setObjectName(QString::fromUtf8("labelX"));
        labelX->setMaximumSize(QSize(20, 20));
        labelX->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelX);

        widgetWidth = new QSpinBox(gridLayoutWidget);
        widgetWidth->setObjectName(QString::fromUtf8("widgetWidth"));
        widgetWidth->setMinimum(200);
        widgetWidth->setMaximum(10000);

        horizontalLayout_2->addWidget(widgetWidth);


        gridLayout->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        labelWidgetSize = new QLabel(gridLayoutWidget);
        labelWidgetSize->setObjectName(QString::fromUtf8("labelWidgetSize"));
        labelWidgetSize->setMargin(10);

        gridLayout->addWidget(labelWidgetSize, 2, 0, 1, 1);

        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMargin(10);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMargin(10);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButton_2 = new QRadioButton(gridLayoutWidget);
        buttonGroup = new QButtonGroup(Dialog);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_4->addWidget(radioButton_2);

        radioButton = new QRadioButton(gridLayoutWidget);
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout_4->addWidget(radioButton);


        gridLayout->addLayout(horizontalLayout_4, 4, 1, 1, 1);

        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(550, 270, 106, 35));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(440, 270, 106, 35));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Settings", nullptr));
        mouseSensibilityValue->setText(QCoreApplication::translate("Dialog", "1.0", nullptr));
        labelMouseSensibility->setText(QCoreApplication::translate("Dialog", "Mouse Sensibility:", nullptr));
        label_3->setText(QString());
        pushButton->setText(QCoreApplication::translate("Dialog", "...", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "ResourcesDir: ", nullptr));
        labelX->setText(QCoreApplication::translate("Dialog", "x", nullptr));
        labelWidgetSize->setText(QCoreApplication::translate("Dialog", "Widget Size:", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Model: ", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Widget Position:", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Dialog", "Left", nullptr));
        radioButton->setText(QCoreApplication::translate("Dialog", "Right", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGDIALOG_H
