#include "UITeaMS.h"
#include "ui_UITeaMS.h"
#include <QTimer>
#include <QDateTime>
#include <vector>

UITeaMS::UITeaMS(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UITeaMS)
{
    ui->setupUi(this);

    QPixmap *pix = new QPixmap(":/main/res/whiteSWU.png");
    QSize sz = ui->SWU->size();
    ui->SWU->setPixmap(pix->scaled(sz));

    setWindowTitle("西南大学 学生成绩管理系统");
    setWindowIcon(QIcon(":/main/res/icon.ico"));

    //鼠标经过时手型图标
    ui->btnExit->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnLookPersonInfo->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnLookClassGrade->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnAddStudent->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnRemoveStudent->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnSaveChange->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnReverseChange->setCursor(QCursor(Qt::PointingHandCursor));

    //表格双色显示
    ui->GradeView->setAlternatingRowColors(true);

    //欢迎语
    ui->WelcomSays->setText("欢迎您，"+user.getName()+"老师！");

    //系统时间
    ui->SystemTime->setText("系统时间："+QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
    QTimer* timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timeUpdate()));
    timer->start(1000);//1s更新一次

    //读入老师教的课程信息：课程号 课程名到vector存储
    data.ConnectDatabase();
    QString sql=QString("SELECT * FROM CourseInfo WHERE CourseTeacher='%1'")
            .arg(user.getName());
    qDebug()<<sql<<endl;
    QSqlQuery query(data.db);
    if (query.exec(sql))
    {
        qDebug()<<"MyTeachCourse:"<<endl;
        while(query.next())
        {
            QString courseid = query.value(0).toString();
            QString coursename = query.value(1).toString();

            myTeachCourse.push_back(std::make_pair(courseid, coursename));       //加入vector存储

            qDebug()<<courseid<<" "<<coursename<<endl;
        }
    }
    qDebug()<<"vector size: "<<myTeachCourse.size()<<endl;

    //课程加入下拉框
    ui->boxCourseName->clear(); //先清除再添加防止出现问题
    for(int i = 0; i < myTeachCourse.size(); i++)
    {
        QString coursename = myTeachCourse.at(i).second;
        ui->boxCourseName->addItem(coursename);
    }

    on_btnLookPersonInfo_clicked(); //默认查看个人信息页
}

UITeaMS::~UITeaMS()
{
    delete ui;
}

//每秒更新系统时间
void UITeaMS::timeUpdate()
{
    QString dateTime =QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"); //获取当前系统时间
    ui->SystemTime->setText("系统时间："+dateTime);
}

//查看班级成绩页面
void UITeaMS::on_btnLookClassGrade_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_ClassGrade);

    int nowLookCourseIndex = ui->boxCourseName->currentIndex(); //当前查看的课程信息在vector中的位置
    qDebug()<<nowLookCourseIndex<<endl;

    pModel = new QSqlTableModel(this);
    pModel->setTable("Course"+myTeachCourse.at(nowLookCourseIndex).first);  // 设置表名

    pModel->setEditStrategy(QSqlTableModel::OnManualSubmit); //提交模式：手动保存更改
    pModel->select();

    pModel->setHeaderData(0, Qt::Horizontal, "学号");
    pModel->setHeaderData(1, Qt::Horizontal, "姓名");
    pModel->setHeaderData(2, Qt::Horizontal, "性别");
    pModel->setHeaderData(3, Qt::Horizontal, "学院");
    pModel->setHeaderData(4, Qt::Horizontal, "专业");
    pModel->setHeaderData(5, Qt::Horizontal, "课程分数");
    pModel->setHeaderData(6, Qt::Horizontal, "是否缺考");
    pModel->sort(0, Qt::AscendingOrder); // 第0列升序排序

    ui->GradeView->setModel(pModel);

    //设置列宽
    ui->GradeView->setColumnWidth(0,100);
    ui->GradeView->setColumnWidth(1,80);
    ui->GradeView->setColumnWidth(2,60);
    ui->GradeView->setColumnWidth(3,200);
    ui->GradeView->setColumnWidth(4,150);
    ui->GradeView->setColumnWidth(5,80);
    ui->GradeView->setColumnWidth(6,60);
}

//查看个人信息页面
void UITeaMS::on_btnLookPersonInfo_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_personInfo);

    ui->psifName->setText(user.getName());
    ui->psifGender->setText(user.getGender());
    ui->psifID->setText(user.getID());
    ui->psifCollege->setText(user.getCollege());
}

//下拉框改变选项时
void UITeaMS::on_boxCourseName_currentIndexChanged(int index)
{
    on_btnLookClassGrade_clicked();
}

//撤销修改
void UITeaMS::on_btnReverseChange_clicked()
{
    pModel->revertAll();
}

//保存修改
void UITeaMS::on_btnSaveChange_clicked()
{
    pModel->database().transaction(); //开始事务操作
    if (pModel->submitAll())
        pModel->database().commit(); //提交
    else
    {
        pModel->database().rollback(); //回滚
        QMessageBox::warning(this, tr("tableModel"),tr("错误: %1").arg(pModel->lastError().text()));
    }
}

//删除选中的学生行
void UITeaMS::on_btnRemoveStudent_clicked()
{

    //获取选中的行
    int curRow = ui->GradeView->currentIndex().row();

    //删除该行
    pModel->removeRow(curRow);

    int ok = QMessageBox::warning(this,tr("删除此学生？"),tr("您确定要删除此学生信息吗？"), QMessageBox::Yes,QMessageBox::No);
    if(ok == QMessageBox::No)
    {
       pModel->revertAll(); //不删除，则撤销
    }
    else pModel->submitAll(); //提交，删除该行
}

//添加学生
void UITeaMS::on_btnAddStudent_clicked()
{
    int rowNum = pModel->rowCount(); //获得行数
    pModel->insertRow(rowNum); //添加一行
    pModel->setData(pModel->index(rowNum,0),"请输入");
    ui->GradeView->setCurrentIndex(pModel->index(rowNum,0));    //跳转到新添加行
    ui->GradeView->edit(pModel->index(rowNum,0));    //开始编辑新行

}
