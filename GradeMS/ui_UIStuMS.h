/********************************************************************************
** Form generated from reading UI file 'UIStuMS.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UISTUMS_H
#define UI_UISTUMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIStuMS
{
public:
    QWidget *centralwidget;
    QWidget *LeftWidget;
    QPushButton *btnLookPersonInfo;
    QPushButton *btnLookPersonGrade;
    QFrame *line;
    QPushButton *btnExit;
    QPushButton *btnSelectedCourse;
    QLabel *SWU;
    QFrame *line_2;
    QStackedWidget *stackedWidget;
    QWidget *page_personInfo;
    QLabel *psifName;
    QLabel *psifID;
    QLabel *psifClass;
    QLabel *psifCollege;
    QLabel *psifGender;
    QLabel *psifMajor;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *grid;
    QWidget *page_personGrade;
    QTableView *GradeView;
    QLabel *label_7;
    QWidget *page_selectedCourse;
    QTableView *CourseView;
    QLabel *CourseCnt;
    QWidget *TopWidget;
    QLabel *SystemTime;
    QLabel *WelcomSays;
    QMenuBar *menubar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *UIStuMS)
    {
        if (UIStuMS->objectName().isEmpty())
            UIStuMS->setObjectName(QString::fromUtf8("UIStuMS"));
        UIStuMS->resize(800, 600);
        UIStuMS->setMinimumSize(QSize(800, 600));
        UIStuMS->setMaximumSize(QSize(800, 600));
        UIStuMS->setStyleSheet(QString::fromUtf8("#centralwidget{background-color: rgb(251, 255, 255);}\n"
"#page_personInfo{background-color: rgb(251, 255, 255);}\n"
"#page_personGrade{background-color: rgb(251, 255, 255);}\n"
"#page_selectedCourse{background-color: rgb(251, 255, 255);}\n"
""));
        centralwidget = new QWidget(UIStuMS);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        LeftWidget = new QWidget(centralwidget);
        LeftWidget->setObjectName(QString::fromUtf8("LeftWidget"));
        LeftWidget->setGeometry(QRect(-1, -1, 111, 571));
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
        btnLookPersonGrade = new QPushButton(LeftWidget);
        btnLookPersonGrade->setObjectName(QString::fromUtf8("btnLookPersonGrade"));
        btnLookPersonGrade->setGeometry(QRect(12, 185, 90, 30));
        btnLookPersonGrade->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        btnSelectedCourse = new QPushButton(LeftWidget);
        btnSelectedCourse->setObjectName(QString::fromUtf8("btnSelectedCourse"));
        btnSelectedCourse->setGeometry(QRect(12, 235, 90, 30));
        btnSelectedCourse->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        SWU = new QLabel(LeftWidget);
        SWU->setObjectName(QString::fromUtf8("SWU"));
        SWU->setGeometry(QRect(8, 8, 96, 96));
        line_2 = new QFrame(LeftWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 115, 118, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(130, 70, 641, 471));
        page_personInfo = new QWidget();
        page_personInfo->setObjectName(QString::fromUtf8("page_personInfo"));
        psifName = new QLabel(page_personInfo);
        psifName->setObjectName(QString::fromUtf8("psifName"));
        psifName->setGeometry(QRect(170, 100, 390, 31));
        psifName->setStyleSheet(QString::fromUtf8("font: 27px \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        psifName->setAlignment(Qt::AlignCenter);
        psifID = new QLabel(page_personInfo);
        psifID->setObjectName(QString::fromUtf8("psifID"));
        psifID->setGeometry(QRect(170, 200, 390, 31));
        psifID->setStyleSheet(QString::fromUtf8("font: 27px \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        psifID->setAlignment(Qt::AlignCenter);
        psifClass = new QLabel(page_personInfo);
        psifClass->setObjectName(QString::fromUtf8("psifClass"));
        psifClass->setGeometry(QRect(170, 350, 390, 31));
        psifClass->setStyleSheet(QString::fromUtf8("font: 27px \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        psifClass->setAlignment(Qt::AlignCenter);
        psifCollege = new QLabel(page_personInfo);
        psifCollege->setObjectName(QString::fromUtf8("psifCollege"));
        psifCollege->setGeometry(QRect(170, 250, 390, 31));
        psifCollege->setStyleSheet(QString::fromUtf8("font: 27px \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        psifCollege->setAlignment(Qt::AlignCenter);
        psifGender = new QLabel(page_personInfo);
        psifGender->setObjectName(QString::fromUtf8("psifGender"));
        psifGender->setGeometry(QRect(170, 150, 390, 31));
        psifGender->setStyleSheet(QString::fromUtf8("font: 27px \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        psifGender->setAlignment(Qt::AlignCenter);
        psifMajor = new QLabel(page_personInfo);
        psifMajor->setObjectName(QString::fromUtf8("psifMajor"));
        psifMajor->setGeometry(QRect(170, 300, 390, 31));
        psifMajor->setStyleSheet(QString::fromUtf8("font: 27px \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        psifMajor->setAlignment(Qt::AlignCenter);
        label = new QLabel(page_personInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 99, 61, 31));
        label->setStyleSheet(QString::fromUtf8("font: 19px \"\351\273\221\344\275\223\";"));
        label_2 = new QLabel(page_personInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 149, 61, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 19px \"\351\273\221\344\275\223\";"));
        label_3 = new QLabel(page_personInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 199, 61, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 19px \"\351\273\221\344\275\223\";"));
        label_4 = new QLabel(page_personInfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 249, 61, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 19px \"\351\273\221\344\275\223\";"));
        label_5 = new QLabel(page_personInfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 299, 61, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 19px \"\351\273\221\344\275\223\";"));
        label_6 = new QLabel(page_personInfo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 349, 61, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 19px \"\351\273\221\344\275\223\";"));
        grid = new QLabel(page_personInfo);
        grid->setObjectName(QString::fromUtf8("grid"));
        grid->setGeometry(QRect(60, 79, 531, 321));
        grid->setStyleSheet(QString::fromUtf8("border:2px dashed #242424;\n"
"border-color: #475594;\n"
"border-radius: 20px"));
        stackedWidget->addWidget(page_personInfo);
        grid->raise();
        psifName->raise();
        psifID->raise();
        psifClass->raise();
        psifCollege->raise();
        psifGender->raise();
        psifMajor->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        page_personGrade = new QWidget();
        page_personGrade->setObjectName(QString::fromUtf8("page_personGrade"));
        GradeView = new QTableView(page_personGrade);
        GradeView->setObjectName(QString::fromUtf8("GradeView"));
        GradeView->setGeometry(QRect(15, 51, 611, 401));
        GradeView->setStyleSheet(QString::fromUtf8("QTableView{  \n"
"    color: black;  	/*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
"    border: 1px solid rgb(148, 107, 86);          /*\350\276\271\346\241\206\351\242\234\350\211\262*/  \n"
"    gridline-color:rgb(255, 233, 217);     	/*grid\347\272\277\351\242\234\350\211\262*/  \n"
"    background-color: #fcfcfc;  	/*\346\227\240\346\225\260\346\215\256\350\241\214\351\242\234\350\211\262*/\n"
"    alternate-background-color:rgba(231, 255, 233, 100); /*\350\241\214\344\272\244\346\233\277\351\242\234\350\211\262*/\n"
"    selection-color: black;   \n"
"    selection-background-color: rgb(255, 253, 225); /*\351\200\211\344\270\255\350\241\214\350\203\214\346\231\257\351\242\234\350\211\262*/ \n"
"	font-size: 12px;   \n"
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
        label_7 = new QLabel(page_personGrade);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 15, 391, 21));
        label_7->setStyleSheet(QString::fromUtf8("font: 19px \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        stackedWidget->addWidget(page_personGrade);
        page_selectedCourse = new QWidget();
        page_selectedCourse->setObjectName(QString::fromUtf8("page_selectedCourse"));
        CourseView = new QTableView(page_selectedCourse);
        CourseView->setObjectName(QString::fromUtf8("CourseView"));
        CourseView->setGeometry(QRect(15, 51, 611, 401));
        CourseView->setStyleSheet(QString::fromUtf8("QTableView{  \n"
"    color: black;  	/*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
"    border: 1px solid rgb(148, 107, 86);          /*\350\276\271\346\241\206\351\242\234\350\211\262*/  \n"
"    gridline-color:rgb(255, 233, 217);     	/*grid\347\272\277\351\242\234\350\211\262*/  \n"
"    background-color: #fcfcfc;  	/*\346\227\240\346\225\260\346\215\256\350\241\214\351\242\234\350\211\262*/\n"
"    alternate-background-color:rgba(231, 255, 233, 100); /*\350\241\214\344\272\244\346\233\277\351\242\234\350\211\262*/\n"
"    selection-color: black;   \n"
"    selection-background-color: rgb(255, 253, 225); /*\351\200\211\344\270\255\350\241\214\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"	font-size: 12px;  \n"
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
        CourseCnt = new QLabel(page_selectedCourse);
        CourseCnt->setObjectName(QString::fromUtf8("CourseCnt"));
        CourseCnt->setGeometry(QRect(20, 15, 381, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        font.setKerning(true);
        CourseCnt->setFont(font);
        CourseCnt->setStyleSheet(QString::fromUtf8("font: 19px \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        stackedWidget->addWidget(page_selectedCourse);
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
        QFont font1;
        font1.setFamily(QString::fromUtf8("WD\347\262\227\351\222\242\347\254\224\350\241\214\346\245\267-\345\207\244\346\256\277\344\274\230\345\214\226\347\211\210"));
        font1.setBold(true);
        font1.setWeight(75);
        WelcomSays->setFont(font1);
        WelcomSays->setStyleSheet(QString::fromUtf8("	font-size: 16px;  "));
        UIStuMS->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UIStuMS);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        UIStuMS->setMenuBar(menubar);
        toolBar = new QToolBar(UIStuMS);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        UIStuMS->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(UIStuMS);
        QObject::connect(btnExit, SIGNAL(clicked()), UIStuMS, SLOT(close()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UIStuMS);
    } // setupUi

    void retranslateUi(QMainWindow *UIStuMS)
    {
        UIStuMS->setWindowTitle(QCoreApplication::translate("UIStuMS", "MainWindow", nullptr));
        btnLookPersonInfo->setText(QCoreApplication::translate("UIStuMS", "\346\237\245\347\234\213\346\234\254\344\272\272\344\277\241\346\201\257", nullptr));
        btnLookPersonGrade->setText(QCoreApplication::translate("UIStuMS", "\346\237\245\350\257\242\346\234\254\344\272\272\346\210\220\347\273\251", nullptr));
        btnExit->setText(QCoreApplication::translate("UIStuMS", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
        btnSelectedCourse->setText(QCoreApplication::translate("UIStuMS", "\346\237\245\350\257\242\345\267\262\351\200\211\350\257\276\347\250\213", nullptr));
        SWU->setText(QCoreApplication::translate("UIStuMS", "SWU", nullptr));
        psifName->setText(QCoreApplication::translate("UIStuMS", "\350\224\241\345\211\215\345\223\262", nullptr));
        psifID->setText(QCoreApplication::translate("UIStuMS", "202100001", nullptr));
        psifClass->setText(QCoreApplication::translate("UIStuMS", "3", nullptr));
        psifCollege->setText(QCoreApplication::translate("UIStuMS", "\350\256\241\347\256\227\346\234\272\344\270\216\344\277\241\346\201\257\347\247\221\345\255\246\345\255\246\351\231\242 \350\275\257\344\273\266\345\255\246\351\231\242", nullptr));
        psifGender->setText(QCoreApplication::translate("UIStuMS", "\347\224\267", nullptr));
        psifMajor->setText(QCoreApplication::translate("UIStuMS", "\350\256\241\347\256\227\346\234\272\347\247\221\345\255\246\344\270\216\346\212\200\346\234\257", nullptr));
        label->setText(QCoreApplication::translate("UIStuMS", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("UIStuMS", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("UIStuMS", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("UIStuMS", "\345\255\246\351\231\242\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("UIStuMS", "\344\270\223\344\270\232\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("UIStuMS", "\347\217\255\347\272\247\357\274\232", nullptr));
        grid->setText(QString());
        label_7->setText(QCoreApplication::translate("UIStuMS", "\346\202\250\347\232\204\346\210\220\347\273\251\345\246\202\344\270\213\357\274\232", nullptr));
        CourseCnt->setText(QCoreApplication::translate("UIStuMS", "\346\202\250\345\205\261\351\200\211\346\213\251 \351\227\250\350\257\276\347\250\213\350\277\233\350\241\214\345\255\246\344\271\240\357\274\201 \350\257\246\347\273\206\344\277\241\346\201\257\345\246\202\344\270\213\357\274\232", nullptr));
        SystemTime->setText(QCoreApplication::translate("UIStuMS", "\347\263\273\347\273\237\346\227\266\351\227\264\357\274\232", nullptr));
        WelcomSays->setText(QCoreApplication::translate("UIStuMS", "\346\254\242\350\277\216\346\202\250\357\274\214\345\220\214\345\255\246\357\274\201", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("UIStuMS", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UIStuMS: public Ui_UIStuMS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UISTUMS_H
