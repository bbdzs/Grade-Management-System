#include "UIStuMS.h"
#include "ui_UIStuMS.h"
#include <QTimer>
#include <QDateTime>
#include <QStandardItemModel>

UIStuMS::UIStuMS(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UIStuMS)
{
    ui->setupUi(this);

    setWindowTitle("西南大学 学生成绩管理系统");
    setWindowIcon(QIcon(":/main/res/icon.ico"));

    QPixmap *pix = new QPixmap(":/main/res/whiteSWU.png");
    QSize sz = ui->SWU->size();
    ui->SWU->setPixmap(pix->scaled(sz));

    //鼠标经过时手型图标
    ui->btnExit->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnLookPersonInfo->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnLookPersonGrade->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnSelectedCourse->setCursor(QCursor(Qt::PointingHandCursor));

    //表格双色显示
    ui->GradeView->setAlternatingRowColors(true);
    ui->CourseView->setAlternatingRowColors(true);

    //欢迎语
    ui->WelcomSays->setText("欢迎您，"+user.getName()+"同学！");

    //系统时间
    ui->SystemTime->setText("系统时间："+QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
    QTimer* timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timeUpdate()));
    timer->start(1000);//1s更新一次

    Data data;
    //读取所有开设的课程信息
    data.addAllCourse();

    //读入学生本人所有信息 包含身份与课程
    data.addMyStuInfo();

    on_btnLookPersonInfo_clicked();     //默认进入查看信息页面
}

UIStuMS::~UIStuMS()
{
    delete ui;
}

//每秒更新系统时间
void UIStuMS::timeUpdate()
{
    QString dateTime =QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"); //获取当前系统时间
    ui->SystemTime->setText("系统时间："+dateTime);
}

//查看本人信息页面
void UIStuMS::on_btnLookPersonInfo_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_personInfo);

    Student me;
    Data data;
    data.getMyInfo(me);

    ui->psifName->setText(me.getName());
    ui->psifGender->setText(me.getGender());
    ui->psifID->setText(me.getID());
    ui->psifCollege->setText(me.getCollege());
    ui->psifMajor->setText(me.getMajor());
    ui->psifClass->setText(me.getClass());
}

//查看个人成绩页面
void UIStuMS::on_btnLookPersonGrade_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_personGrade);

    Data data;
    QStandardItemModel* myCourseScore = new QStandardItemModel(this);
    data.getStuCoursesScore(myCourseScore); //向model中添加成绩数据

    ui->GradeView->setModel(myCourseScore); //在tableview中显示model

    //设置默认列宽
    ui->GradeView->setColumnWidth(0, 120);
    ui->GradeView->setColumnWidth(1, 80);
    ui->GradeView->setColumnWidth(2, 60);
    ui->GradeView->setColumnWidth(3, 180);
    ui->GradeView->setColumnWidth(4, 80);
    ui->GradeView->setColumnWidth(5, 80);
    //不可编辑
    ui->GradeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

//查看已选课程页面
void UIStuMS::on_btnSelectedCourse_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_selectedCourse);

    Student me;
    Data data;
    data.getMyInfo(me);

    //课程总计文字提示
    ui->CourseCnt->setText("您共选择了 "+QString::number(me.learnCourseCount, 10)+" 门课程进行学习！详细信息如下：");

    //TableView显示
    QStandardItemModel* myCourseInfo = new QStandardItemModel(this);
    data.getStuCoursesInfo(myCourseInfo); //向model中添加数据

    ui->CourseView->setModel(myCourseInfo); //在tableview中显示model

    //设置列宽
    ui->CourseView->setColumnWidth(0,80);
    ui->CourseView->setColumnWidth(1,150);
    ui->CourseView->setColumnWidth(2,100);
    ui->CourseView->setColumnWidth(3,80);
    ui->CourseView->resizeColumnToContents(4);

    //不可编辑
    ui->CourseView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}
