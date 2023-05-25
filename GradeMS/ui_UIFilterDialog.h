/********************************************************************************
** Form generated from reading UI file 'UIFilterDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIFILTERDIALOG_H
#define UI_UIFILTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIFilterDialog
{
public:
    QWidget *widget;
    QLineEdit *edit_Class;
    QLabel *label;
    QLabel *label_2;
    QRadioButton *radioButton_name;
    QCheckBox *checkBox_Class;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_5;
    QFrame *line_7;
    QRadioButton *radioButton_id;
    QFrame *line_4;
    QFrame *line;
    QCheckBox *checkBox_College;
    QLineEdit *edit_Major;
    QLineEdit *edit_College;
    QLineEdit *edit_Find;
    QCheckBox *checkBox_Major;
    QFrame *line_6;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *UIFilterDialog)
    {
        if (UIFilterDialog->objectName().isEmpty())
            UIFilterDialog->setObjectName(QString::fromUtf8("UIFilterDialog"));
        UIFilterDialog->resize(380, 400);
        UIFilterDialog->setMinimumSize(QSize(380, 400));
        UIFilterDialog->setMaximumSize(QSize(380, 400));
        widget = new QWidget(UIFilterDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 25, 361, 321));
        edit_Class = new QLineEdit(widget);
        edit_Class->setObjectName(QString::fromUtf8("edit_Class"));
        edit_Class->setGeometry(QRect(120, 110, 201, 20));
        edit_Class->setStyleSheet(QString::fromUtf8("font-size: 12px"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(153, 163, 54, 12));
        label->setStyleSheet(QString::fromUtf8("font-size: 12px"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(153, 5, 54, 12));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 12px"));
        radioButton_name = new QRadioButton(widget);
        radioButton_name->setObjectName(QString::fromUtf8("radioButton_name"));
        radioButton_name->setGeometry(QRect(70, 200, 89, 16));
        radioButton_name->setStyleSheet(QString::fromUtf8("font-size: 12px"));
        checkBox_Class = new QCheckBox(widget);
        checkBox_Class->setObjectName(QString::fromUtf8("checkBox_Class"));
        checkBox_Class->setGeometry(QRect(40, 112, 71, 16));
        checkBox_Class->setStyleSheet(QString::fromUtf8("font-size: 12px"));
        line_2 = new QFrame(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(240, 0, 110, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(widget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 0, 111, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(widget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(0, 10, 20, 290));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(widget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(10, 290, 340, 20));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        radioButton_id = new QRadioButton(widget);
        radioButton_id->setObjectName(QString::fromUtf8("radioButton_id"));
        radioButton_id->setGeometry(QRect(210, 200, 89, 16));
        radioButton_id->setStyleSheet(QString::fromUtf8("font-size: 12px"));
        line_4 = new QFrame(widget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(240, 160, 110, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 160, 111, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        checkBox_College = new QCheckBox(widget);
        checkBox_College->setObjectName(QString::fromUtf8("checkBox_College"));
        checkBox_College->setGeometry(QRect(40, 30, 71, 16));
        checkBox_College->setStyleSheet(QString::fromUtf8("font-size: 12px"));
        edit_Major = new QLineEdit(widget);
        edit_Major->setObjectName(QString::fromUtf8("edit_Major"));
        edit_Major->setGeometry(QRect(120, 70, 201, 20));
        edit_Major->setStyleSheet(QString::fromUtf8("font-size: 12px"));
        edit_College = new QLineEdit(widget);
        edit_College->setObjectName(QString::fromUtf8("edit_College"));
        edit_College->setGeometry(QRect(120, 30, 201, 20));
        edit_College->setStyleSheet(QString::fromUtf8("font-size: 12px"));
        edit_Find = new QLineEdit(widget);
        edit_Find->setObjectName(QString::fromUtf8("edit_Find"));
        edit_Find->setGeometry(QRect(70, 240, 221, 20));
        edit_Find->setStyleSheet(QString::fromUtf8("font-size: 12px"));
        checkBox_Major = new QCheckBox(widget);
        checkBox_Major->setObjectName(QString::fromUtf8("checkBox_Major"));
        checkBox_Major->setGeometry(QRect(40, 70, 71, 16));
        checkBox_Major->setStyleSheet(QString::fromUtf8("font-size: 12px"));
        line_6 = new QFrame(widget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(340, 10, 20, 290));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        widget_2 = new QWidget(UIFilterDialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(190, 340, 171, 41));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("font-size: 12px"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("font-size: 12px"));

        horizontalLayout->addWidget(pushButton_2);

        QWidget::setTabOrder(checkBox_College, edit_College);
        QWidget::setTabOrder(edit_College, checkBox_Major);
        QWidget::setTabOrder(checkBox_Major, edit_Major);
        QWidget::setTabOrder(edit_Major, checkBox_Class);
        QWidget::setTabOrder(checkBox_Class, edit_Class);
        QWidget::setTabOrder(edit_Class, radioButton_name);
        QWidget::setTabOrder(radioButton_name, radioButton_id);
        QWidget::setTabOrder(radioButton_id, edit_Find);
        QWidget::setTabOrder(edit_Find, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(UIFilterDialog);

        QMetaObject::connectSlotsByName(UIFilterDialog);
    } // setupUi

    void retranslateUi(QDialog *UIFilterDialog)
    {
        UIFilterDialog->setWindowTitle(QCoreApplication::translate("UIFilterDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("UIFilterDialog", "\347\262\276\347\241\256\346\237\245\346\211\276", nullptr));
        label_2->setText(QCoreApplication::translate("UIFilterDialog", "\350\214\203\345\233\264\347\255\233\351\200\211", nullptr));
        radioButton_name->setText(QCoreApplication::translate("UIFilterDialog", "\345\247\223\345\220\215", nullptr));
        checkBox_Class->setText(QCoreApplication::translate("UIFilterDialog", "\346\214\211\347\217\255\347\272\247", nullptr));
        radioButton_id->setText(QCoreApplication::translate("UIFilterDialog", "\345\255\246\345\217\267/\345\267\245\345\217\267", nullptr));
        checkBox_College->setText(QCoreApplication::translate("UIFilterDialog", "\346\214\211\345\255\246\351\231\242", nullptr));
        checkBox_Major->setText(QCoreApplication::translate("UIFilterDialog", "\346\214\211\344\270\223\344\270\232", nullptr));
        pushButton->setText(QCoreApplication::translate("UIFilterDialog", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("UIFilterDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UIFilterDialog: public Ui_UIFilterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIFILTERDIALOG_H
