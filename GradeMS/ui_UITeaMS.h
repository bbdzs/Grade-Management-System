/********************************************************************************
** Form generated from reading UI file 'UITeaMS.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UITEAMS_H
#define UI_UITEAMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UITeaMS
{
public:
    QWidget *centralwidget;
    QWidget *LeftWidget;
    QPushButton *btnLookPersonInfo;
    QPushButton *btnLookClassGrade;
    QFrame *line;
    QPushButton *btnExit;
    QFrame *line_2;
    QLabel *SWU;
    QStackedWidget *stackedWidget;
    QWidget *page_personInfo;
    QLabel *psifName;
    QLabel *psifID;
    QLabel *psifCollege;
    QLabel *psifGender;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *grid;
    QWidget *page_ClassGrade;
    QTableView *GradeView;
    QPushButton *btnAddStudent;
    QPushButton *btnRemoveStudent;
    QPushButton *btnSaveChange;
    QComboBox *boxCourseName;
    QLabel *label_5;
    QPushButton *btnReverseChange;
    QLabel *label_10;
    QWidget *TopWidget;
    QLabel *SystemTime;
    QLabel *WelcomSays;
    QMenuBar *menubar;

    void setupUi(QMainWindow *UITeaMS)
    {
        if (UITeaMS->objectName().isEmpty())
            UITeaMS->setObjectName(QString::fromUtf8("UITeaMS"));
        UITeaMS->resize(800, 580);
        UITeaMS->setMinimumSize(QSize(800, 580));
        UITeaMS->setMaximumSize(QSize(800, 580));
        UITeaMS->setStyleSheet(QString::fromUtf8("#centralwidget{background-color: rgb(251, 255, 255);}\n"
"#page_personInfo{background-color: rgb(251, 255, 255);}\n"
"#page_ClassGrade{background-color: rgb(251, 255, 255);}\n"
""));
        centralwidget = new QWidget(UITeaMS);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        LeftWidget = new QWidget(centralwidget);
        LeftWidget->setObjectName(QString::fromUtf8("LeftWidget"));
        LeftWidget->setGeometry(QRect(0, 0, 111, 571));
        LeftWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 96, 115);"));
        btnLookPersonInfo = new QPushButton(LeftWidget);
        btnLookPersonInfo->setObjectName(QString::fromUtf8("btnLookPersonInfo"));
        btnLookPersonInfo->setGeometry(QRect(12, 135, 90, 30));
        btnLookPersonInfo->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	margin-right:3px;\n"
"	margin-bottom:0px;\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: #00d0ef;\n"
"	border:1px outset rgb(255, 255, 255, 80%);\n"
"	border-radius:6px;\n"
"	font-family: \"Microsoft YaHei\";\n"
"	font-size: 12px;\n"
"	font-weight: bold;\n"
"	font: 12px \"Microsoft YaHei\";\n"
"} \n"
"\n"
"/*\351\274\240\346\240\207\346\224\276\345\234\250\346\214\211\351\222\256\344\270\212\346\226\271*/\n"
"QPushButton:hover {\n"
"	background-color: rgba(165, 205, 255,80%);\n"
"	border:2px outset rgba(36, 36, 36,0);\n"
"} \n"
"\n"
"/*\351\274\240\346\240\207\347\202\271\345\207\273\346\214\211\351\222\256*/\n"
"QPushButton:pressed {\n"
"	background-color: rgba(165, 205, 255,90%);\n"
"	border:4px outset rgba(36, 36, 36,0);\n"
"}"));
        btnLookClassGrade = new QPushButton(LeftWidget);
        btnLookClassGrade->setObjectName(QString::fromUtf8("btnLookClassGrade"));
        btnLookClassGrade->setGeometry(QRect(12, 185, 90, 30));
        btnLookClassGrade->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	margin-right:3px;\n"
"	margin-bottom:0px;\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: #00d0ef;\n"
"	border:1px outset rgb(255, 255, 255, 80%);\n"
"	border-radius:6px;\n"
"	font-family: \"Microsoft YaHei\";\n"
"	font-size: 12px;\n"
"	font-weight: bold;\n"
"	font: 12px \"Microsoft YaHei\";\n"
"} \n"
"\n"
"/*\351\274\240\346\240\207\346\224\276\345\234\250\346\214\211\351\222\256\344\270\212\346\226\271*/\n"
"QPushButton:hover {\n"
"	background-color: rgba(165, 205, 255,80%);\n"
"	border:2px outset rgba(36, 36, 36,0);\n"
"} \n"
"\n"
"/*\351\274\240\346\240\207\347\202\271\345\207\273\346\214\211\351\222\256*/\n"
"QPushButton:pressed {\n"
"	background-color: rgba(165, 205, 255,90%);\n"
"	border:4px outset rgba(36, 36, 36,0);\n"
"}"));
        line = new QFrame(LeftWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 430, 118, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        btnExit = new QPushButton(LeftWidget);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        btnExit->setGeometry(QRect(18, 485, 75, 23));
        btnExit->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"	font-size: 12px;  "));
        line_2 = new QFrame(LeftWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 115, 118, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        SWU = new QLabel(LeftWidget);
        SWU->setObjectName(QString::fromUtf8("SWU"));
        SWU->setGeometry(QRect(8, 8, 96, 96));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(130, 70, 641, 471));
        page_personInfo = new QWidget();
        page_personInfo->setObjectName(QString::fromUtf8("page_personInfo"));
        psifName = new QLabel(page_personInfo);
        psifName->setObjectName(QString::fromUtf8("psifName"));
        psifName->setGeometry(QRect(170, 120, 390, 31));
        psifName->setStyleSheet(QString::fromUtf8("font: 27px \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        psifName->setAlignment(Qt::AlignCenter);
        psifID = new QLabel(page_personInfo);
        psifID->setObjectName(QString::fromUtf8("psifID"));
        psifID->setGeometry(QRect(170, 220, 390, 31));
        psifID->setStyleSheet(QString::fromUtf8("font: 27px \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        psifID->setAlignment(Qt::AlignCenter);
        psifCollege = new QLabel(page_personInfo);
        psifCollege->setObjectName(QString::fromUtf8("psifCollege"));
        psifCollege->setGeometry(QRect(170, 270, 390, 31));
        psifCollege->setStyleSheet(QString::fromUtf8("font: 27px \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        psifCollege->setAlignment(Qt::AlignCenter);
        psifGender = new QLabel(page_personInfo);
        psifGender->setObjectName(QString::fromUtf8("psifGender"));
        psifGender->setGeometry(QRect(170, 170, 390, 31));
        psifGender->setStyleSheet(QString::fromUtf8("font: 27px \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        psifGender->setAlignment(Qt::AlignCenter);
        label = new QLabel(page_personInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 119, 61, 31));
        label->setStyleSheet(QString::fromUtf8("font: 19px \"\351\273\221\344\275\223\";"));
        label_2 = new QLabel(page_personInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 169, 61, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 19px \"\351\273\221\344\275\223\";"));
        label_3 = new QLabel(page_personInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 219, 61, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 19px \"\351\273\221\344\275\223\";"));
        label_4 = new QLabel(page_personInfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 269, 61, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 19px \"\351\273\221\344\275\223\";"));
        grid = new QLabel(page_personInfo);
        grid->setObjectName(QString::fromUtf8("grid"));
        grid->setGeometry(QRect(60, 90, 531, 241));
        grid->setStyleSheet(QString::fromUtf8("border:2px dashed #242424;\n"
"border-color: #475594;\n"
"border-radius: 20px"));
        stackedWidget->addWidget(page_personInfo);
        grid->raise();
        psifName->raise();
        psifID->raise();
        psifCollege->raise();
        psifGender->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        page_ClassGrade = new QWidget();
        page_ClassGrade->setObjectName(QString::fromUtf8("page_ClassGrade"));
        GradeView = new QTableView(page_ClassGrade);
        GradeView->setObjectName(QString::fromUtf8("GradeView"));
        GradeView->setGeometry(QRect(15, 41, 611, 391));
        GradeView->setStyleSheet(QString::fromUtf8("QTableView{  \n"
"    color: black;  	/*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
"    border: 1px solid rgb(148, 107, 86);          /*\350\276\271\346\241\206\351\242\234\350\211\262*/  \n"
"    gridline-color:rgb(255, 233, 217);     	/*grid\347\272\277\351\242\234\350\211\262*/  \n"
"    background-color: #fcfcfc;  	/*\346\227\240\346\225\260\346\215\256\350\241\214\351\242\234\350\211\262*/\n"
"    alternate-background-color:rgba(231, 255, 233, 100); /*\350\241\214\344\272\244\346\233\277\351\242\234\350\211\262*/\n"
"    selection-color: black;   \n"
"    selection-background-color: rgb(255, 253, 225); /*\351\200\211\344\270\255\350\241\214\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"	font-size: 12px;    \n"
"}  \n"
"  \n"
"QTableView::item:!alternate:!selected{  \n"
"    background-color: white;    /*\344\272\244\346\233\277\350\241\214\347\232\204\345\217\246\344\270\200\351\242\234\350\211\262*/\n"
"    selection-background-color: rgb(220, 220, 220);  \n"
"    selection-color: blac"
                        "k; \n"
"}  \n"
"\n"
""));
        btnAddStudent = new QPushButton(page_ClassGrade);
        btnAddStudent->setObjectName(QString::fromUtf8("btnAddStudent"));
        btnAddStudent->setGeometry(QRect(280, 440, 75, 23));
        btnAddStudent->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        btnRemoveStudent = new QPushButton(page_ClassGrade);
        btnRemoveStudent->setObjectName(QString::fromUtf8("btnRemoveStudent"));
        btnRemoveStudent->setGeometry(QRect(370, 440, 75, 23));
        btnRemoveStudent->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        btnSaveChange = new QPushButton(page_ClassGrade);
        btnSaveChange->setObjectName(QString::fromUtf8("btnSaveChange"));
        btnSaveChange->setGeometry(QRect(550, 440, 75, 23));
        btnSaveChange->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        boxCourseName = new QComboBox(page_ClassGrade);
        boxCourseName->setObjectName(QString::fromUtf8("boxCourseName"));
        boxCourseName->setGeometry(QRect(315, 0, 161, 22));
        boxCourseName->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        label_5 = new QLabel(page_ClassGrade);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 0, 281, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 19px \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        btnReverseChange = new QPushButton(page_ClassGrade);
        btnReverseChange->setObjectName(QString::fromUtf8("btnReverseChange"));
        btnReverseChange->setGeometry(QRect(460, 440, 75, 23));
        btnReverseChange->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        label_10 = new QLabel(page_ClassGrade);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(490, 20, 151, 16));
        label_10->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        stackedWidget->addWidget(page_ClassGrade);
        TopWidget = new QWidget(centralwidget);
        TopWidget->setObjectName(QString::fromUtf8("TopWidget"));
        TopWidget->setGeometry(QRect(130, 0, 661, 41));
        SystemTime = new QLabel(TopWidget);
        SystemTime->setObjectName(QString::fromUtf8("SystemTime"));
        SystemTime->setGeometry(QRect(480, 0, 181, 31));
        SystemTime->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        WelcomSays = new QLabel(TopWidget);
        WelcomSays->setObjectName(QString::fromUtf8("WelcomSays"));
        WelcomSays->setGeometry(QRect(0, 0, 261, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("WD\347\262\227\351\222\242\347\254\224\350\241\214\346\245\267-\345\207\244\346\256\277\344\274\230\345\214\226\347\211\210"));
        font.setBold(true);
        font.setWeight(75);
        WelcomSays->setFont(font);
        WelcomSays->setStyleSheet(QString::fromUtf8("	font-size: 16px;  "));
        UITeaMS->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UITeaMS);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        UITeaMS->setMenuBar(menubar);

        retranslateUi(UITeaMS);
        QObject::connect(btnExit, SIGNAL(clicked()), UITeaMS, SLOT(close()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UITeaMS);
    } // setupUi

    void retranslateUi(QMainWindow *UITeaMS)
    {
        UITeaMS->setWindowTitle(QCoreApplication::translate("UITeaMS", "MainWindow", nullptr));
        btnLookPersonInfo->setText(QCoreApplication::translate("UITeaMS", "\346\237\245\347\234\213\346\234\254\344\272\272\344\277\241\346\201\257", nullptr));
        btnLookClassGrade->setText(QCoreApplication::translate("UITeaMS", "\346\237\245\347\234\213\347\217\255\347\272\247\346\210\220\347\273\251", nullptr));
        btnExit->setText(QCoreApplication::translate("UITeaMS", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
        SWU->setText(QCoreApplication::translate("UITeaMS", "SWU", nullptr));
        psifName->setText(QCoreApplication::translate("UITeaMS", "\345\256\213\345\277\227\350\277\234", nullptr));
        psifID->setText(QCoreApplication::translate("UITeaMS", "202100001", nullptr));
        psifCollege->setText(QCoreApplication::translate("UITeaMS", "\350\256\241\347\256\227\346\234\272\344\270\216\344\277\241\346\201\257\347\247\221\345\255\246\345\255\246\351\231\242 \350\275\257\344\273\266\345\255\246\351\231\242", nullptr));
        psifGender->setText(QCoreApplication::translate("UITeaMS", "\347\224\267", nullptr));
        label->setText(QCoreApplication::translate("UITeaMS", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("UITeaMS", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("UITeaMS", "\345\267\245\345\217\267\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("UITeaMS", "\345\255\246\351\231\242\357\274\232", nullptr));
        grid->setText(QString());
        btnAddStudent->setText(QCoreApplication::translate("UITeaMS", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        btnRemoveStudent->setText(QCoreApplication::translate("UITeaMS", "\345\210\240\351\231\244\345\255\246\347\224\237", nullptr));
        btnSaveChange->setText(QCoreApplication::translate("UITeaMS", "\344\277\235\345\255\230\344\277\256\346\224\271", nullptr));
        label_5->setText(QCoreApplication::translate("UITeaMS", "\350\257\267\351\200\211\346\213\251\346\202\250\350\246\201\346\237\245\347\234\213\347\217\255\347\272\247\346\210\220\347\273\251\347\232\204\350\257\276\347\250\213\357\274\232", nullptr));
        btnReverseChange->setText(QCoreApplication::translate("UITeaMS", "\346\222\244\351\224\200\346\223\215\344\275\234", nullptr));
        label_10->setText(QCoreApplication::translate("UITeaMS", "\357\274\210\346\217\220\347\244\272\357\274\232\345\217\214\345\207\273\345\217\257\344\277\256\346\224\271\345\206\205\345\256\271\357\274\211", nullptr));
        SystemTime->setText(QCoreApplication::translate("UITeaMS", "\347\263\273\347\273\237\346\227\266\351\227\264\357\274\232", nullptr));
        WelcomSays->setText(QCoreApplication::translate("UITeaMS", "\346\254\242\350\277\216\346\202\250\357\274\214\350\200\201\345\270\210\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UITeaMS: public Ui_UITeaMS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UITEAMS_H
