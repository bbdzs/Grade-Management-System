/********************************************************************************
** Form generated from reading UI file 'UIChangePswd.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UICHANGEPSWD_H
#define UI_UICHANGEPSWD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIChangePswd
{
public:
    QWidget *widget_2;
    QLabel *CgPswdImg;
    QWidget *widet;
    QLineEdit *textUserName;
    QLineEdit *textUserID;
    QLineEdit *textUserOldPswd;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *ButtonSure;
    QPushButton *ButtonReturn;
    QLineEdit *textUserPswd_1;
    QLineEdit *textUserPswd_2;
    QFrame *line;

    void setupUi(QWidget *UIChangePswd)
    {
        if (UIChangePswd->objectName().isEmpty())
            UIChangePswd->setObjectName(QString::fromUtf8("UIChangePswd"));
        UIChangePswd->resize(800, 580);
        UIChangePswd->setMinimumSize(QSize(800, 580));
        UIChangePswd->setMaximumSize(QSize(800, 580));
        UIChangePswd->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        widget_2 = new QWidget(UIChangePswd);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 371, 601));
        CgPswdImg = new QLabel(widget_2);
        CgPswdImg->setObjectName(QString::fromUtf8("CgPswdImg"));
        CgPswdImg->setGeometry(QRect(-1, -1, 351, 601));
        widet = new QWidget(UIChangePswd);
        widet->setObjectName(QString::fromUtf8("widet"));
        widet->setGeometry(QRect(380, 0, 421, 601));
        textUserName = new QLineEdit(widet);
        textUserName->setObjectName(QString::fromUtf8("textUserName"));
        textUserName->setGeometry(QRect(90, 130, 211, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        textUserName->setFont(font);
        textUserName->setStyleSheet(QString::fromUtf8("font-size: 13px"));
        textUserID = new QLineEdit(widet);
        textUserID->setObjectName(QString::fromUtf8("textUserID"));
        textUserID->setGeometry(QRect(90, 190, 211, 31));
        textUserID->setFont(font);
        textUserID->setStyleSheet(QString::fromUtf8("font-size: 13px"));
        textUserID->setMaxLength(9);
        textUserOldPswd = new QLineEdit(widet);
        textUserOldPswd->setObjectName(QString::fromUtf8("textUserOldPswd"));
        textUserOldPswd->setGeometry(QRect(90, 260, 211, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Candara"));
        textUserOldPswd->setFont(font1);
        textUserOldPswd->setStyleSheet(QString::fromUtf8("font-size: 13px"));
        textUserOldPswd->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(widet);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 110, 54, 12));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 12px"));
        label_3 = new QLabel(widet);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 170, 71, 16));
        label_3->setStyleSheet(QString::fromUtf8("font-size: 12px"));
        label_4 = new QLabel(widet);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 240, 54, 12));
        label_4->setStyleSheet(QString::fromUtf8("font-size: 12px"));
        label_5 = new QLabel(widet);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(110, 60, 161, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223"));
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("font: 16px \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        ButtonSure = new QPushButton(widet);
        ButtonSure->setObjectName(QString::fromUtf8("ButtonSure"));
        ButtonSure->setGeometry(QRect(90, 440, 211, 31));
        ButtonSure->setStyleSheet(QString::fromUtf8("/*\346\255\243\345\270\270\346\240\267\345\274\217*/\n"
"QPushButton\n"
"{	background-color: rgb(29, 123, 255);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 25 12px \"Bahnschrift Light\";\n"
"}\n"
"\n"
"/*\351\274\240\346\240\207\345\201\234\347\225\231\346\240\267\345\274\217*/\n"
"QPushButton:hover\n"
"{\n"
"	font: 25 12px \"Bahnschrift Light\";\n"
"	background-color: #4090ff;\n"
"}"));
        ButtonSure->setAutoDefault(true);
        ButtonReturn = new QPushButton(widet);
        ButtonReturn->setObjectName(QString::fromUtf8("ButtonReturn"));
        ButtonReturn->setGeometry(QRect(100, 470, 191, 31));
        ButtonReturn->setMouseTracking(false);
        ButtonReturn->setStyleSheet(QString::fromUtf8("/*\346\255\243\345\270\270\346\240\267\345\274\217*/\n"
"QPushButton\n"
"{\n"
"	background-color: transparent;\n"
"	color: #1c7eff;\n"
"	font: 25 12px \"Bahnschrift Light\";\n"
"	border-style:solid\n"
"}\n"
"\n"
"/*\351\274\240\346\240\207\345\201\234\347\225\231\346\240\267\345\274\217*/\n"
"QPushButton:hover\n"
"{\n"
"	color: #21aeff;\n"
"	font: 25 12px \"Bahnschrift Light\";\n"
"}"));
        ButtonReturn->setFlat(false);
        textUserPswd_1 = new QLineEdit(widet);
        textUserPswd_1->setObjectName(QString::fromUtf8("textUserPswd_1"));
        textUserPswd_1->setGeometry(QRect(90, 340, 211, 31));
        textUserPswd_1->setFont(font1);
        textUserPswd_1->setStyleSheet(QString::fromUtf8("font-size: 13px"));
        textUserPswd_1->setEchoMode(QLineEdit::Password);
        textUserPswd_2 = new QLineEdit(widet);
        textUserPswd_2->setObjectName(QString::fromUtf8("textUserPswd_2"));
        textUserPswd_2->setGeometry(QRect(90, 380, 211, 31));
        textUserPswd_2->setFont(font1);
        textUserPswd_2->setStyleSheet(QString::fromUtf8("font-size: 13px"));
        textUserPswd_2->setEchoMode(QLineEdit::Password);
        line = new QFrame(widet);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(90, 310, 211, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        QWidget::setTabOrder(textUserName, textUserID);
        QWidget::setTabOrder(textUserID, textUserOldPswd);
        QWidget::setTabOrder(textUserOldPswd, textUserPswd_1);
        QWidget::setTabOrder(textUserPswd_1, textUserPswd_2);
        QWidget::setTabOrder(textUserPswd_2, ButtonSure);
        QWidget::setTabOrder(ButtonSure, ButtonReturn);

        retranslateUi(UIChangePswd);

        QMetaObject::connectSlotsByName(UIChangePswd);
    } // setupUi

    void retranslateUi(QWidget *UIChangePswd)
    {
        UIChangePswd->setWindowTitle(QCoreApplication::translate("UIChangePswd", "Form", nullptr));
        CgPswdImg->setText(QCoreApplication::translate("UIChangePswd", "IMAGE", nullptr));
        label_2->setText(QCoreApplication::translate("UIChangePswd", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("UIChangePswd", "\345\255\246\345\217\267/\345\267\245\345\217\267\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("UIChangePswd", "\345\216\237\345\257\206\347\240\201\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("UIChangePswd", "\350\257\267\346\214\211\346\217\220\347\244\272\350\276\223\345\205\245\344\270\213\345\210\227\344\277\241\346\201\257", nullptr));
        ButtonSure->setText(QCoreApplication::translate("UIChangePswd", "\347\241\256\345\256\232", nullptr));
        ButtonReturn->setText(QCoreApplication::translate("UIChangePswd", "Click to return Login", nullptr));
        textUserPswd_1->setPlaceholderText(QCoreApplication::translate("UIChangePswd", "\350\257\267\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201", nullptr));
        textUserPswd_2->setPlaceholderText(QCoreApplication::translate("UIChangePswd", "\350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UIChangePswd: public Ui_UIChangePswd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UICHANGEPSWD_H
