/********************************************************************************
** Form generated from reading UI file 'UIRootMS.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIROOTMS_H
#define UI_UIROOTMS_H

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

class Ui_UIRootMS
{
public:
    QWidget *centralwidget;
    QWidget *TopWidget;
    QLabel *SystemTime;
    QLabel *WelcomSays;
    QWidget *LeftWidget;
    QPushButton *btnManagePersonInfo;
    QPushButton *btnManageStuGrade;
    QFrame *line;
    QPushButton *btnExit;
    QFrame *line_2;
    QLabel *SWU;
    QPushButton *btnManageAccount;
    QPushButton *btnManageStuInfo;
    QPushButton *btnManageCourseInfo;
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
    QWidget *page_StuInfo;
    QTableView *StuInfoView;
    QLabel *label_prompt_StudentInfo;
    QPushButton *btnAdd_StudentInfo;
    QPushButton *btnReverseChange_StudentInfo;
    QPushButton *btnSaveChange_StudentInfo;
    QPushButton *btnRemove_StudentInfo;
    QPushButton *btnFilter_StudentInfo;
    QPushButton *btnFilterClean_StudentInfo;
    QLabel *label_13;
    QWidget *page_StuGrade;
    QTableView *GradeView;
    QPushButton *btnAdd_StudentGrade;
    QPushButton *btnRemove_StudentGrade;
    QPushButton *btnSaveChange_StudentGrade;
    QComboBox *boxCourseName;
    QLabel *label_5;
    QPushButton *btnReverseChange_StudentGrade;
    QLabel *label_10;
    QWidget *page_CourseInfo;
    QTableView *CourseInfoView;
    QLabel *label_CourseInfo;
    QPushButton *btnAdd_CourseInfo;
    QPushButton *btnReverseChange_CourseInfo;
    QPushButton *btnSaveChange_CourseInfo;
    QPushButton *btnRemove_CourseInfo;
    QLabel *label_11;
    QWidget *page_UserAccount;
    QTableView *AccountView;
    QLabel *label_prompt_Account;
    QPushButton *btnAdd_UserAccount;
    QPushButton *btnSaveChange_UserAccount;
    QPushButton *btnReverseChange_UserAccount;
    QPushButton *btnRemove_UserAccount;
    QPushButton *btnFind_UserAccount;
    QLabel *label_12;
    QPushButton *btnFindClean_UserAccount;
    QMenuBar *menubar;

    void setupUi(QMainWindow *UIRootMS)
    {
        if (UIRootMS->objectName().isEmpty())
            UIRootMS->setObjectName(QString::fromUtf8("UIRootMS"));
        UIRootMS->resize(800, 580);
        UIRootMS->setMinimumSize(QSize(800, 580));
        UIRootMS->setMaximumSize(QSize(800, 580));
        UIRootMS->setStyleSheet(QString::fromUtf8("/*\350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"#centralwidget{background-color: rgb(251, 255, 255);}\n"
"#page_personInfo{background-color: rgb(251, 255, 255);}\n"
"#page_StuInfo{background-color: rgb(251, 255, 255);}\n"
"#page_StuGrade{background-color: rgb(251, 255, 255);}\n"
"#page_UserAccount{background-color: rgb(251, 255, 255);}\n"
"#page_CourseInfo{background-color: rgb(251, 255, 255);}\n"
"\n"
""));
        centralwidget = new QWidget(UIRootMS);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        TopWidget = new QWidget(centralwidget);
        TopWidget->setObjectName(QString::fromUtf8("TopWidget"));
        TopWidget->setGeometry(QRect(130, 0, 661, 41));
        SystemTime = new QLabel(TopWidget);
        SystemTime->setObjectName(QString::fromUtf8("SystemTime"));
        SystemTime->setGeometry(QRect(480, 0, 181, 31));
        SystemTime->setStyleSheet(QString::fromUtf8("font-size: 12px;"));
        WelcomSays = new QLabel(TopWidget);
        WelcomSays->setObjectName(QString::fromUtf8("WelcomSays"));
        WelcomSays->setGeometry(QRect(0, 0, 261, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("WD\347\262\227\351\222\242\347\254\224\350\241\214\346\245\267-\345\207\244\346\256\277\344\274\230\345\214\226\347\211\210"));
        font.setBold(true);
        font.setWeight(75);
        WelcomSays->setFont(font);
        WelcomSays->setStyleSheet(QString::fromUtf8("font-size: 16px;"));
        LeftWidget = new QWidget(centralwidget);
        LeftWidget->setObjectName(QString::fromUtf8("LeftWidget"));
        LeftWidget->setGeometry(QRect(0, 0, 111, 571));
        LeftWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 96, 115);"));
        btnManagePersonInfo = new QPushButton(LeftWidget);
        btnManagePersonInfo->setObjectName(QString::fromUtf8("btnManagePersonInfo"));
        btnManagePersonInfo->setGeometry(QRect(12, 135, 90, 30));
        btnManagePersonInfo->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        btnManageStuGrade = new QPushButton(LeftWidget);
        btnManageStuGrade->setObjectName(QString::fromUtf8("btnManageStuGrade"));
        btnManageStuGrade->setGeometry(QRect(12, 235, 90, 30));
        btnManageStuGrade->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"font-size: 12px"));
        line_2 = new QFrame(LeftWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 115, 118, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        SWU = new QLabel(LeftWidget);
        SWU->setObjectName(QString::fromUtf8("SWU"));
        SWU->setGeometry(QRect(8, 8, 96, 96));
        btnManageAccount = new QPushButton(LeftWidget);
        btnManageAccount->setObjectName(QString::fromUtf8("btnManageAccount"));
        btnManageAccount->setGeometry(QRect(12, 335, 90, 30));
        btnManageAccount->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        btnManageStuInfo = new QPushButton(LeftWidget);
        btnManageStuInfo->setObjectName(QString::fromUtf8("btnManageStuInfo"));
        btnManageStuInfo->setGeometry(QRect(12, 185, 90, 30));
        btnManageStuInfo->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        btnManageCourseInfo = new QPushButton(LeftWidget);
        btnManageCourseInfo->setObjectName(QString::fromUtf8("btnManageCourseInfo"));
        btnManageCourseInfo->setGeometry(QRect(12, 285, 90, 30));
        btnManageCourseInfo->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(130, 70, 641, 471));
        page_personInfo = new QWidget();
        page_personInfo->setObjectName(QString::fromUtf8("page_personInfo"));
        psifName = new QLabel(page_personInfo);
        psifName->setObjectName(QString::fromUtf8("psifName"));
        psifName->setGeometry(QRect(180, 120, 390, 31));
        psifName->setStyleSheet(QString::fromUtf8("font: 27px \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        psifName->setAlignment(Qt::AlignCenter);
        psifID = new QLabel(page_personInfo);
        psifID->setObjectName(QString::fromUtf8("psifID"));
        psifID->setGeometry(QRect(180, 221, 390, 31));
        psifID->setStyleSheet(QString::fromUtf8("font: 27px \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        psifID->setAlignment(Qt::AlignCenter);
        psifCollege = new QLabel(page_personInfo);
        psifCollege->setObjectName(QString::fromUtf8("psifCollege"));
        psifCollege->setGeometry(QRect(180, 271, 390, 31));
        psifCollege->setStyleSheet(QString::fromUtf8("font: 27px \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        psifCollege->setAlignment(Qt::AlignCenter);
        psifGender = new QLabel(page_personInfo);
        psifGender->setObjectName(QString::fromUtf8("psifGender"));
        psifGender->setGeometry(QRect(180, 171, 390, 31));
        psifGender->setStyleSheet(QString::fromUtf8("font: 27px \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        psifGender->setAlignment(Qt::AlignCenter);
        label = new QLabel(page_personInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 120, 61, 31));
        label->setStyleSheet(QString::fromUtf8("font: 19px \"\351\273\221\344\275\223\";"));
        label_2 = new QLabel(page_personInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 170, 61, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 19px \"\351\273\221\344\275\223\";"));
        label_3 = new QLabel(page_personInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 220, 61, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 19px \"\351\273\221\344\275\223\";"));
        label_4 = new QLabel(page_personInfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 270, 61, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 19px \"\351\273\221\344\275\223\";"));
        grid = new QLabel(page_personInfo);
        grid->setObjectName(QString::fromUtf8("grid"));
        grid->setGeometry(QRect(60, 80, 531, 261));
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
        page_StuInfo = new QWidget();
        page_StuInfo->setObjectName(QString::fromUtf8("page_StuInfo"));
        StuInfoView = new QTableView(page_StuInfo);
        StuInfoView->setObjectName(QString::fromUtf8("StuInfoView"));
        StuInfoView->setGeometry(QRect(15, 41, 611, 391));
        StuInfoView->setStyleSheet(QString::fromUtf8("QTableView{  \n"
"    color: black;  	/*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
"    border: 1px solid rgb(148, 107, 86);          /*\350\276\271\346\241\206\351\242\234\350\211\262*/  \n"
"    gridline-color:rgb(255, 233, 217);     	/*grid\347\272\277\351\242\234\350\211\262*/  \n"
"    background-color: #fcfcfc;  	/*\346\227\240\346\225\260\346\215\256\350\241\214\351\242\234\350\211\262*/\n"
"    alternate-background-color:rgba(231, 255, 233, 100); /*\350\241\214\344\272\244\346\233\277\351\242\234\350\211\262*/\n"
"    selection-color: black;   \n"
"    selection-background-color: rgb(255, 253, 225); /*\351\200\211\344\270\255\350\241\214\350\203\214\346\231\257\351\242\234\350\211\262*/ \n"
"	font-size: 12px; \n"
"}  \n"
"  \n"
"QTableView::item:!alternate:!selected{  \n"
"    background-color: white;    /*\344\272\244\346\233\277\350\241\214\347\232\204\345\217\246\344\270\200\351\242\234\350\211\262*/\n"
"    selection-background-color: rgb(220, 220, 220);  \n"
"    selection-color: black;"
                        " \n"
"}  \n"
"\n"
""));
        label_prompt_StudentInfo = new QLabel(page_StuInfo);
        label_prompt_StudentInfo->setObjectName(QString::fromUtf8("label_prompt_StudentInfo"));
        label_prompt_StudentInfo->setGeometry(QRect(20, 5, 531, 21));
        label_prompt_StudentInfo->setStyleSheet(QString::fromUtf8("font: 19px \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        btnAdd_StudentInfo = new QPushButton(page_StuInfo);
        btnAdd_StudentInfo->setObjectName(QString::fromUtf8("btnAdd_StudentInfo"));
        btnAdd_StudentInfo->setGeometry(QRect(280, 440, 75, 23));
        btnAdd_StudentInfo->setStyleSheet(QString::fromUtf8("font-size: 12px;"));
        btnReverseChange_StudentInfo = new QPushButton(page_StuInfo);
        btnReverseChange_StudentInfo->setObjectName(QString::fromUtf8("btnReverseChange_StudentInfo"));
        btnReverseChange_StudentInfo->setGeometry(QRect(460, 440, 75, 23));
        btnReverseChange_StudentInfo->setStyleSheet(QString::fromUtf8("font-size: 12px;"));
        btnSaveChange_StudentInfo = new QPushButton(page_StuInfo);
        btnSaveChange_StudentInfo->setObjectName(QString::fromUtf8("btnSaveChange_StudentInfo"));
        btnSaveChange_StudentInfo->setGeometry(QRect(550, 440, 75, 23));
        btnSaveChange_StudentInfo->setStyleSheet(QString::fromUtf8("font-size: 12px;"));
        btnRemove_StudentInfo = new QPushButton(page_StuInfo);
        btnRemove_StudentInfo->setObjectName(QString::fromUtf8("btnRemove_StudentInfo"));
        btnRemove_StudentInfo->setGeometry(QRect(370, 440, 75, 23));
        btnRemove_StudentInfo->setStyleSheet(QString::fromUtf8("font-size: 12px;"));
        btnFilter_StudentInfo = new QPushButton(page_StuInfo);
        btnFilter_StudentInfo->setObjectName(QString::fromUtf8("btnFilter_StudentInfo"));
        btnFilter_StudentInfo->setGeometry(QRect(16, 440, 75, 23));
        btnFilter_StudentInfo->setStyleSheet(QString::fromUtf8("font-size: 12px;"));
        btnFilterClean_StudentInfo = new QPushButton(page_StuInfo);
        btnFilterClean_StudentInfo->setObjectName(QString::fromUtf8("btnFilterClean_StudentInfo"));
        btnFilterClean_StudentInfo->setGeometry(QRect(106, 440, 75, 23));
        btnFilterClean_StudentInfo->setStyleSheet(QString::fromUtf8("font-size: 12px;"));
        label_13 = new QLabel(page_StuInfo);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(490, 20, 151, 16));
        label_13->setStyleSheet(QString::fromUtf8("font-size: 12px;"));
        stackedWidget->addWidget(page_StuInfo);
        page_StuGrade = new QWidget();
        page_StuGrade->setObjectName(QString::fromUtf8("page_StuGrade"));
        GradeView = new QTableView(page_StuGrade);
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
"	font-size: 12px;  \n"
"}  \n"
"  \n"
"QTableView::item:!alternate:!selected{  \n"
"    background-color: white;    /*\344\272\244\346\233\277\350\241\214\347\232\204\345\217\246\344\270\200\351\242\234\350\211\262*/\n"
"    selection-background-color: rgb(220, 220, 220);  \n"
"    selection-color: black;"
                        " \n"
"}  \n"
"\n"
""));
        btnAdd_StudentGrade = new QPushButton(page_StuGrade);
        btnAdd_StudentGrade->setObjectName(QString::fromUtf8("btnAdd_StudentGrade"));
        btnAdd_StudentGrade->setGeometry(QRect(280, 440, 75, 23));
        btnAdd_StudentGrade->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        btnRemove_StudentGrade = new QPushButton(page_StuGrade);
        btnRemove_StudentGrade->setObjectName(QString::fromUtf8("btnRemove_StudentGrade"));
        btnRemove_StudentGrade->setGeometry(QRect(370, 440, 75, 23));
        btnRemove_StudentGrade->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        btnSaveChange_StudentGrade = new QPushButton(page_StuGrade);
        btnSaveChange_StudentGrade->setObjectName(QString::fromUtf8("btnSaveChange_StudentGrade"));
        btnSaveChange_StudentGrade->setGeometry(QRect(550, 440, 75, 23));
        btnSaveChange_StudentGrade->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        boxCourseName = new QComboBox(page_StuGrade);
        boxCourseName->setObjectName(QString::fromUtf8("boxCourseName"));
        boxCourseName->setGeometry(QRect(280, 5, 171, 22));
        boxCourseName->setStyleSheet(QString::fromUtf8("font-size: 12px;"));
        label_5 = new QLabel(page_StuGrade);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 5, 251, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 19px \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        btnReverseChange_StudentGrade = new QPushButton(page_StuGrade);
        btnReverseChange_StudentGrade->setObjectName(QString::fromUtf8("btnReverseChange_StudentGrade"));
        btnReverseChange_StudentGrade->setGeometry(QRect(460, 440, 75, 23));
        btnReverseChange_StudentGrade->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        label_10 = new QLabel(page_StuGrade);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(490, 20, 151, 16));
        label_10->setStyleSheet(QString::fromUtf8("font-size: 12px;"));
        stackedWidget->addWidget(page_StuGrade);
        page_CourseInfo = new QWidget();
        page_CourseInfo->setObjectName(QString::fromUtf8("page_CourseInfo"));
        CourseInfoView = new QTableView(page_CourseInfo);
        CourseInfoView->setObjectName(QString::fromUtf8("CourseInfoView"));
        CourseInfoView->setGeometry(QRect(15, 41, 611, 391));
        CourseInfoView->setStyleSheet(QString::fromUtf8("QTableView{  \n"
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
        label_CourseInfo = new QLabel(page_CourseInfo);
        label_CourseInfo->setObjectName(QString::fromUtf8("label_CourseInfo"));
        label_CourseInfo->setGeometry(QRect(20, 5, 431, 21));
        label_CourseInfo->setStyleSheet(QString::fromUtf8("font: 19px \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        btnAdd_CourseInfo = new QPushButton(page_CourseInfo);
        btnAdd_CourseInfo->setObjectName(QString::fromUtf8("btnAdd_CourseInfo"));
        btnAdd_CourseInfo->setGeometry(QRect(280, 440, 75, 23));
        btnAdd_CourseInfo->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        btnReverseChange_CourseInfo = new QPushButton(page_CourseInfo);
        btnReverseChange_CourseInfo->setObjectName(QString::fromUtf8("btnReverseChange_CourseInfo"));
        btnReverseChange_CourseInfo->setGeometry(QRect(460, 440, 75, 23));
        btnReverseChange_CourseInfo->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        btnSaveChange_CourseInfo = new QPushButton(page_CourseInfo);
        btnSaveChange_CourseInfo->setObjectName(QString::fromUtf8("btnSaveChange_CourseInfo"));
        btnSaveChange_CourseInfo->setGeometry(QRect(550, 440, 75, 23));
        btnSaveChange_CourseInfo->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        btnRemove_CourseInfo = new QPushButton(page_CourseInfo);
        btnRemove_CourseInfo->setObjectName(QString::fromUtf8("btnRemove_CourseInfo"));
        btnRemove_CourseInfo->setGeometry(QRect(370, 440, 75, 23));
        btnRemove_CourseInfo->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        label_11 = new QLabel(page_CourseInfo);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(490, 20, 151, 16));
        label_11->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        stackedWidget->addWidget(page_CourseInfo);
        page_UserAccount = new QWidget();
        page_UserAccount->setObjectName(QString::fromUtf8("page_UserAccount"));
        AccountView = new QTableView(page_UserAccount);
        AccountView->setObjectName(QString::fromUtf8("AccountView"));
        AccountView->setGeometry(QRect(15, 41, 611, 391));
        AccountView->setStyleSheet(QString::fromUtf8("QTableView{  \n"
"    color: black;  	/*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
"    border: 1px solid rgb(148, 107, 86);          /*\350\276\271\346\241\206\351\242\234\350\211\262*/  \n"
"    gridline-color:rgb(255, 233, 217);     	/*grid\347\272\277\351\242\234\350\211\262*/  \n"
"    background-color: #fcfcfc;  	/*\346\227\240\346\225\260\346\215\256\350\241\214\351\242\234\350\211\262*/\n"
"    alternate-background-color:rgba(231, 255, 233, 100); /*\350\241\214\344\272\244\346\233\277\351\242\234\350\211\262*/\n"
"    selection-color: black;   \n"
"    selection-background-color: rgb(255, 253, 225); /*\351\200\211\344\270\255\350\241\214\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"}  \n"
"  \n"
"QTableView::item:!alternate:!selected{  \n"
"    background-color: white;    /*\344\272\244\346\233\277\350\241\214\347\232\204\345\217\246\344\270\200\351\242\234\350\211\262*/\n"
"    selection-background-color: rgb(220, 220, 220);  \n"
"    selection-color: black; \n"
"}  \n"
"\n"
""));
        label_prompt_Account = new QLabel(page_UserAccount);
        label_prompt_Account->setObjectName(QString::fromUtf8("label_prompt_Account"));
        label_prompt_Account->setGeometry(QRect(20, 5, 531, 21));
        label_prompt_Account->setStyleSheet(QString::fromUtf8("font: 19px \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        btnAdd_UserAccount = new QPushButton(page_UserAccount);
        btnAdd_UserAccount->setObjectName(QString::fromUtf8("btnAdd_UserAccount"));
        btnAdd_UserAccount->setGeometry(QRect(280, 440, 75, 23));
        btnAdd_UserAccount->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        btnSaveChange_UserAccount = new QPushButton(page_UserAccount);
        btnSaveChange_UserAccount->setObjectName(QString::fromUtf8("btnSaveChange_UserAccount"));
        btnSaveChange_UserAccount->setGeometry(QRect(550, 440, 75, 23));
        btnSaveChange_UserAccount->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        btnReverseChange_UserAccount = new QPushButton(page_UserAccount);
        btnReverseChange_UserAccount->setObjectName(QString::fromUtf8("btnReverseChange_UserAccount"));
        btnReverseChange_UserAccount->setGeometry(QRect(460, 440, 75, 23));
        btnReverseChange_UserAccount->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        btnRemove_UserAccount = new QPushButton(page_UserAccount);
        btnRemove_UserAccount->setObjectName(QString::fromUtf8("btnRemove_UserAccount"));
        btnRemove_UserAccount->setGeometry(QRect(370, 440, 75, 23));
        btnRemove_UserAccount->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        btnFind_UserAccount = new QPushButton(page_UserAccount);
        btnFind_UserAccount->setObjectName(QString::fromUtf8("btnFind_UserAccount"));
        btnFind_UserAccount->setGeometry(QRect(16, 440, 75, 23));
        btnFind_UserAccount->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        label_12 = new QLabel(page_UserAccount);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(490, 20, 151, 16));
        label_12->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        btnFindClean_UserAccount = new QPushButton(page_UserAccount);
        btnFindClean_UserAccount->setObjectName(QString::fromUtf8("btnFindClean_UserAccount"));
        btnFindClean_UserAccount->setGeometry(QRect(106, 440, 75, 23));
        btnFindClean_UserAccount->setStyleSheet(QString::fromUtf8("	font-size: 12px;  "));
        stackedWidget->addWidget(page_UserAccount);
        UIRootMS->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UIRootMS);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        UIRootMS->setMenuBar(menubar);

        retranslateUi(UIRootMS);
        QObject::connect(btnExit, SIGNAL(clicked()), UIRootMS, SLOT(close()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UIRootMS);
    } // setupUi

    void retranslateUi(QMainWindow *UIRootMS)
    {
        UIRootMS->setWindowTitle(QCoreApplication::translate("UIRootMS", "MainWindow", nullptr));
        SystemTime->setText(QCoreApplication::translate("UIRootMS", "\347\263\273\347\273\237\346\227\266\351\227\264\357\274\232", nullptr));
        WelcomSays->setText(QCoreApplication::translate("UIRootMS", "\346\254\242\350\277\216\346\202\250\357\274\214\347\263\273\347\273\237\347\256\241\347\220\206\345\221\230\357\274\201", nullptr));
        btnManagePersonInfo->setText(QCoreApplication::translate("UIRootMS", "\346\237\245\347\234\213\346\234\254\344\272\272\344\277\241\346\201\257", nullptr));
        btnManageStuGrade->setText(QCoreApplication::translate("UIRootMS", "\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206", nullptr));
        btnExit->setText(QCoreApplication::translate("UIRootMS", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
        SWU->setText(QCoreApplication::translate("UIRootMS", "SWU", nullptr));
        btnManageAccount->setText(QCoreApplication::translate("UIRootMS", "\347\224\250\346\210\267\350\264\246\346\210\267\347\256\241\347\220\206", nullptr));
        btnManageStuInfo->setText(QCoreApplication::translate("UIRootMS", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        btnManageCourseInfo->setText(QCoreApplication::translate("UIRootMS", "\350\257\276\347\250\213\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        psifName->setText(QCoreApplication::translate("UIRootMS", "\345\256\213\345\277\227\350\277\234", nullptr));
        psifID->setText(QCoreApplication::translate("UIRootMS", "202100001", nullptr));
        psifCollege->setText(QCoreApplication::translate("UIRootMS", "\350\256\241\347\256\227\346\234\272\344\270\216\344\277\241\346\201\257\347\247\221\345\255\246\345\255\246\351\231\242 \350\275\257\344\273\266\345\255\246\351\231\242", nullptr));
        psifGender->setText(QCoreApplication::translate("UIRootMS", "\347\224\267", nullptr));
        label->setText(QCoreApplication::translate("UIRootMS", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("UIRootMS", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("UIRootMS", "\345\267\245\345\217\267\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("UIRootMS", "\345\215\225\344\275\215\357\274\232", nullptr));
        grid->setText(QString());
        label_prompt_StudentInfo->setText(QCoreApplication::translate("UIRootMS", "\345\205\250\351\203\250\345\255\246\347\224\237\344\277\241\346\201\257\345\246\202\344\270\213\357\274\232", nullptr));
        btnAdd_StudentInfo->setText(QCoreApplication::translate("UIRootMS", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        btnReverseChange_StudentInfo->setText(QCoreApplication::translate("UIRootMS", "\346\222\244\351\224\200\346\223\215\344\275\234", nullptr));
        btnSaveChange_StudentInfo->setText(QCoreApplication::translate("UIRootMS", "\344\277\235\345\255\230\344\277\256\346\224\271", nullptr));
        btnRemove_StudentInfo->setText(QCoreApplication::translate("UIRootMS", "\345\210\240\351\231\244\345\255\246\347\224\237", nullptr));
        btnFilter_StudentInfo->setText(QCoreApplication::translate("UIRootMS", "\345\255\246\347\224\237\347\255\233\351\200\211", nullptr));
        btnFilterClean_StudentInfo->setText(QCoreApplication::translate("UIRootMS", "\346\230\276\347\244\272\345\205\250\351\203\250", nullptr));
        label_13->setText(QCoreApplication::translate("UIRootMS", "\357\274\210\346\217\220\347\244\272\357\274\232\345\217\214\345\207\273\345\217\257\344\277\256\346\224\271\345\206\205\345\256\271\357\274\211", nullptr));
        btnAdd_StudentGrade->setText(QCoreApplication::translate("UIRootMS", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        btnRemove_StudentGrade->setText(QCoreApplication::translate("UIRootMS", "\345\210\240\351\231\244\345\255\246\347\224\237", nullptr));
        btnSaveChange_StudentGrade->setText(QCoreApplication::translate("UIRootMS", "\344\277\235\345\255\230\344\277\256\346\224\271", nullptr));
        label_5->setText(QCoreApplication::translate("UIRootMS", "\350\257\267\351\200\211\346\213\251\346\202\250\350\246\201\346\237\245\347\234\213\346\210\220\347\273\251\347\232\204\350\257\276\347\250\213\357\274\232", nullptr));
        btnReverseChange_StudentGrade->setText(QCoreApplication::translate("UIRootMS", "\346\222\244\351\224\200\346\223\215\344\275\234", nullptr));
        label_10->setText(QCoreApplication::translate("UIRootMS", "\357\274\210\346\217\220\347\244\272\357\274\232\345\217\214\345\207\273\345\217\257\344\277\256\346\224\271\345\206\205\345\256\271\357\274\211", nullptr));
        label_CourseInfo->setText(QCoreApplication::translate("UIRootMS", "\345\205\261\346\237\245\350\257\242\345\210\260 \351\227\250\345\274\200\350\256\276\350\257\276\347\250\213\357\274\214\350\257\246\347\273\206\344\277\241\346\201\257\345\246\202\344\270\213\357\274\232", nullptr));
        btnAdd_CourseInfo->setText(QCoreApplication::translate("UIRootMS", "\346\267\273\345\212\240\350\257\276\347\250\213", nullptr));
        btnReverseChange_CourseInfo->setText(QCoreApplication::translate("UIRootMS", "\346\222\244\351\224\200\346\223\215\344\275\234", nullptr));
        btnSaveChange_CourseInfo->setText(QCoreApplication::translate("UIRootMS", "\344\277\235\345\255\230\344\277\256\346\224\271", nullptr));
        btnRemove_CourseInfo->setText(QCoreApplication::translate("UIRootMS", "\345\210\240\351\231\244\350\257\276\347\250\213", nullptr));
        label_11->setText(QCoreApplication::translate("UIRootMS", "\357\274\210\346\217\220\347\244\272\357\274\232\345\217\214\345\207\273\345\217\257\344\277\256\346\224\271\345\206\205\345\256\271\357\274\211", nullptr));
        label_prompt_Account->setText(QCoreApplication::translate("UIRootMS", "\347\263\273\347\273\237\344\270\255\345\205\250\351\203\250\345\217\257\347\231\273\351\231\206\350\264\246\346\210\267\345\246\202\344\270\213\357\274\232", nullptr));
        btnAdd_UserAccount->setText(QCoreApplication::translate("UIRootMS", "\346\267\273\345\212\240\350\264\246\346\210\267", nullptr));
        btnSaveChange_UserAccount->setText(QCoreApplication::translate("UIRootMS", "\344\277\235\345\255\230\344\277\256\346\224\271", nullptr));
        btnReverseChange_UserAccount->setText(QCoreApplication::translate("UIRootMS", "\346\222\244\351\224\200\346\223\215\344\275\234", nullptr));
        btnRemove_UserAccount->setText(QCoreApplication::translate("UIRootMS", "\345\210\240\351\231\244\350\264\246\346\210\267", nullptr));
        btnFind_UserAccount->setText(QCoreApplication::translate("UIRootMS", "\346\237\245\346\211\276\347\224\250\346\210\267", nullptr));
        label_12->setText(QCoreApplication::translate("UIRootMS", "\357\274\210\346\217\220\347\244\272\357\274\232\345\217\214\345\207\273\345\217\257\344\277\256\346\224\271\345\206\205\345\256\271\357\274\211", nullptr));
        btnFindClean_UserAccount->setText(QCoreApplication::translate("UIRootMS", "\346\230\276\347\244\272\345\205\250\351\203\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UIRootMS: public Ui_UIRootMS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIROOTMS_H
