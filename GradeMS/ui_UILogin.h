/********************************************************************************
** Form generated from reading UI file 'UILogin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UILOGIN_H
#define UI_UILOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UILogin
{
public:
    QWidget *centralwidget;
    QLabel *loginImage;
    QWidget *widget;
    QLabel *label;
    QLabel *TextLogin;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonLogin;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonChangepswd;
    QLineEdit *textLoginID;
    QLineEdit *textLoginPasswd;
    QLabel *copyright;

    void setupUi(QMainWindow *UILogin)
    {
        if (UILogin->objectName().isEmpty())
            UILogin->setObjectName(QString::fromUtf8("UILogin"));
        UILogin->resize(800, 580);
        UILogin->setMinimumSize(QSize(800, 580));
        UILogin->setMaximumSize(QSize(800, 580));
        UILogin->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(UILogin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        loginImage = new QLabel(centralwidget);
        loginImage->setObjectName(QString::fromUtf8("loginImage"));
        loginImage->setGeometry(QRect(-1, -1, 371, 601));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(380, -10, 421, 611));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 10, 131, 31));
        label->setStyleSheet(QString::fromUtf8("font-size: 12px"));
        TextLogin = new QLabel(widget);
        TextLogin->setObjectName(QString::fromUtf8("TextLogin"));
        TextLogin->setGeometry(QRect(70, 110, 91, 41));
        TextLogin->setStyleSheet(QString::fromUtf8("font: 87 27px \"Arial Black\";"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(80, 340, 241, 81));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonLogin = new QPushButton(widget_3);
        buttonLogin->setObjectName(QString::fromUtf8("buttonLogin"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonLogin->sizePolicy().hasHeightForWidth());
        buttonLogin->setSizePolicy(sizePolicy);
        buttonLogin->setMinimumSize(QSize(80, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        buttonLogin->setFont(font);
        buttonLogin->setCursor(QCursor(Qt::PointingHandCursor));
        buttonLogin->setStyleSheet(QString::fromUtf8("/*\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217*/\n"
"QPushButton{\n"
"	font: 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: #2f3640;\n"
"	background-color:#f8ffff;\n"
"	border-color: #4abefc;\n"
"	border-radius: 15px;\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"/*\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217*/\n"
"QPushButton:hover{\n"
"	font: 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: #FFFFFF;\n"
"	background-color: #4abefc;\n"
"	border-color: #4abefc;\n"
"}\n"
""));

        horizontalLayout->addWidget(buttonLogin);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonChangepswd = new QPushButton(widget_3);
        buttonChangepswd->setObjectName(QString::fromUtf8("buttonChangepswd"));
        sizePolicy.setHeightForWidth(buttonChangepswd->sizePolicy().hasHeightForWidth());
        buttonChangepswd->setSizePolicy(sizePolicy);
        buttonChangepswd->setMinimumSize(QSize(80, 30));
        buttonChangepswd->setCursor(QCursor(Qt::PointingHandCursor));
        buttonChangepswd->setStyleSheet(QString::fromUtf8("/*\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217*/\n"
"QPushButton{\n"
"	font: 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: #2f3640;\n"
"	background-color:#f8ffff;\n"
"	border-color: #4abefc;\n"
"	border-radius: 15px;\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"/*\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217*/\n"
"QPushButton:hover{\n"
"	font: 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: #FFFFFF;\n"
"	background-color: #4abefc;\n"
"	border-color: #4abefc;\n"
"}\n"
""));

        horizontalLayout->addWidget(buttonChangepswd);

        textLoginID = new QLineEdit(widget);
        textLoginID->setObjectName(QString::fromUtf8("textLoginID"));
        textLoginID->setGeometry(QRect(70, 200, 261, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        textLoginID->setFont(font1);
        textLoginID->setStyleSheet(QString::fromUtf8("background-color: #fdfdfd;\n"
"border:1px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font-size: 15px"));
        textLoginID->setMaxLength(9);
        textLoginID->setClearButtonEnabled(false);
        textLoginPasswd = new QLineEdit(widget);
        textLoginPasswd->setObjectName(QString::fromUtf8("textLoginPasswd"));
        textLoginPasswd->setGeometry(QRect(70, 270, 261, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Candara"));
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        textLoginPasswd->setFont(font2);
        textLoginPasswd->setStyleSheet(QString::fromUtf8("background-color: #fdfdfd;\n"
"border:1px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font-size: 15px"));
        textLoginPasswd->setMaxLength(18);
        textLoginPasswd->setEchoMode(QLineEdit::Password);
        copyright = new QLabel(widget);
        copyright->setObjectName(QString::fromUtf8("copyright"));
        copyright->setGeometry(QRect(110, 510, 181, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Consolas"));
        copyright->setFont(font3);
        copyright->setStyleSheet(QString::fromUtf8("font-size: 15px"));
        TextLogin->raise();
        widget_3->raise();
        textLoginID->raise();
        textLoginPasswd->raise();
        copyright->raise();
        label->raise();
        UILogin->setCentralWidget(centralwidget);
        QWidget::setTabOrder(textLoginID, textLoginPasswd);
        QWidget::setTabOrder(textLoginPasswd, buttonLogin);
        QWidget::setTabOrder(buttonLogin, buttonChangepswd);

        retranslateUi(UILogin);

        QMetaObject::connectSlotsByName(UILogin);
    } // setupUi

    void retranslateUi(QMainWindow *UILogin)
    {
        UILogin->setWindowTitle(QCoreApplication::translate("UILogin", "login", nullptr));
        loginImage->setText(QCoreApplication::translate("UILogin", "IMAGE", nullptr));
        label->setText(QCoreApplication::translate("UILogin", "\350\245\277\345\215\227\345\244\247\345\255\246 \346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        TextLogin->setText(QCoreApplication::translate("UILogin", "Login", nullptr));
        buttonLogin->setText(QCoreApplication::translate("UILogin", "\347\231\273\345\275\225", nullptr));
        buttonChangepswd->setText(QCoreApplication::translate("UILogin", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        textLoginID->setPlaceholderText(QCoreApplication::translate("UILogin", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\347\224\250\346\210\267\345\220\215\357\274\210\345\255\246\345\217\267/\345\267\245\345\217\267\357\274\211", nullptr));
        textLoginPasswd->setPlaceholderText(QCoreApplication::translate("UILogin", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\257\206\347\240\201", nullptr));
        copyright->setText(QCoreApplication::translate("UILogin", "\302\251 2022 by Cai Qianzhe", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UILogin: public Ui_UILogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UILOGIN_H
