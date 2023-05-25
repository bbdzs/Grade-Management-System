#include "UIRootMS.h"
#include "ui_UIRootMS.h"
#include <QTimer>
#include <QDateTime>
#include <QStandardItemModel>
#include <QInputDialog>
#include <vector>

UIRootMS::UIRootMS(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UIRootMS)
{
    ui->setupUi(this);

    setWindowTitle("西南大学 学生成绩管理系统");
    setWindowIcon(QIcon(":/main/res/icon.ico"));

    QPixmap *pix = new QPixmap(":/main/res/whiteSWU.png");
    QSize sz = ui->SWU->size();
    ui->SWU->setPixmap(pix->scaled(sz));

    //鼠标经过时手型图标
    ui->btnExit->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnManageAccount->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnManageStuInfo->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnAdd_CourseInfo->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnManageStuGrade->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnAdd_StudentInfo->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnAdd_UserAccount->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnAdd_StudentGrade->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnFind_UserAccount->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnManageCourseInfo->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnManagePersonInfo->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnRemove_CourseInfo->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnFind_UserAccount->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnFilter_StudentInfo->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnRemove_StudentInfo->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnRemove_UserAccount->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnRemove_StudentGrade->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnSaveChange_CourseInfo->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnSaveChange_StudentInfo->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnSaveChange_UserAccount->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnSaveChange_StudentGrade->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnReverseChange_CourseInfo->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnReverseChange_StudentInfo->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnReverseChange_UserAccount->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnReverseChange_StudentGrade->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnFindClean_UserAccount->setCursor(QCursor(Qt::PointingHandCursor));
    ui->btnFilterClean_StudentInfo->setCursor(QCursor(Qt::PointingHandCursor));

    //表格双色显示
    ui->GradeView->setAlternatingRowColors(true);
    ui->AccountView->setAlternatingRowColors(true);
    ui->StuInfoView->setAlternatingRowColors(true);
    ui->CourseInfoView->setAlternatingRowColors(true);

    //系统时间
    ui->SystemTime->setText("系统时间："+QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
    QTimer* timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timeUpdate()));
    timer->start(1000);//1s更新一次

    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(QCoreApplication::applicationDirPath() + "/GradeMS.db");

    pModel = new QSqlTableModel(this);

    CleanFilter();  //初始化筛选条件
    ReadCourseInfo();   //读入全部课程信息

    on_btnManagePersonInfo_clicked();   //个人信息页面
}

UIRootMS::~UIRootMS()
{
    delete ui;
}

FilterData filterData;

//每秒更新系统时间
void UIRootMS::timeUpdate()
{
    QString dateTime =QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"); //获取当前系统时间
    ui->SystemTime->setText("系统时间："+dateTime);
}

//读入学校开设的全部课程信息
void UIRootMS::ReadCourseInfo()
{
    //读入学校开设的全部课程信息：课程号 课程名到vector存储
    allCourse.clear();  //清空vector
    QString sql=QString("SELECT * FROM CourseInfo");
    QSqlQuery query(data.db);
    if (query.exec(sql))
    {
        qDebug()<<"AllCourse:"<<endl;
        while(query.next())
        {
            QString courseid = query.value(0).toString();
            QString coursename = query.value(1).toString();

            allCourse.push_back(std::make_pair(courseid, coursename));       //加入vector存储

            qDebug()<<courseid<<" "<<coursename<<endl;
        }
    }
    qDebug()<<"vector size: "<<allCourse.size()<<endl;

    //课程加入下拉框
    ui->boxCourseName->clear(); //先清除再添加防止出现问题
    for(int i = 0; i < allCourse.size(); i++)
    {
        QString coursename = allCourse.at(i).second;
        ui->boxCourseName->addItem(coursename);
    }

}

//清空筛选条件
void UIRootMS::CleanFilter()
{
    //范围筛选
    filterData.filter_College = 0;
    filterData.filter_Major = 0;
    filterData.filter_Class = 0;
    filterData.college = "";
    filterData.major =  "";
    filterData.studentclass =  "";

    //精确匹配
    filterData.precise = 0;
    filterData.name = 0;
    filterData.id = 0;
    filterData.precice_text =  "";

    pModel->select();

}

//删除指定行
void UIRootMS::RemoveLine(int curRow)
{
    qDebug()<<"删除操作-当前行： "<<curRow<<endl;
    //删除该行
    pModel->removeRow(curRow);
    int ok = QMessageBox::warning(this,tr("删除此学生？"),tr("您确定要删除此学生信息吗？"), QMessageBox::Yes,QMessageBox::No);
    if(ok == QMessageBox::No)
        pModel->revertAll(); //不删除，则撤销
    else pModel->submitAll(); //提交，删除该行

}

//保存修改
void UIRootMS::SaveChange()
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


/*--查看个人信息页面--*/
void UIRootMS::on_btnManagePersonInfo_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_personInfo);

    ui->psifName->setText(user.getName());
    ui->psifGender->setText(user.getGender());
    ui->psifID->setText(user.getID());
    ui->psifCollege->setText(user.getCollege());
}



/*--学生信息管理页面--*/
void UIRootMS::on_btnManageStuInfo_clicked()
{
    ui->label_prompt_StudentInfo->setText("全部学生信息如下：");
    ui->stackedWidget->setCurrentWidget(ui->page_StuInfo);

    pModel->setTable("StudentInfo");  // 设置表名

    pModel->setEditStrategy(QSqlTableModel::OnManualSubmit); //提交模式：手动保存更改
    pModel->select();

    pModel->setHeaderData(0, Qt::Horizontal, "姓名");
    pModel->setHeaderData(1, Qt::Horizontal, "性别");
    pModel->setHeaderData(2, Qt::Horizontal, "学号");
    pModel->setHeaderData(3, Qt::Horizontal, "学院");
    pModel->setHeaderData(4, Qt::Horizontal, "专业");
    pModel->setHeaderData(5, Qt::Horizontal, "班级");
    pModel->sort(2, Qt::AscendingOrder); // 按学号升序排序

    ui->StuInfoView->setModel(pModel);

    //设置默认列宽
    ui->StuInfoView->setColumnWidth(0,60);
    ui->StuInfoView->setColumnWidth(1,45);
    ui->StuInfoView->setColumnWidth(2,95);
    ui->StuInfoView->setColumnWidth(3,200);
    ui->StuInfoView->setColumnWidth(4,130);
    ui->StuInfoView->setColumnWidth(5,64);

}

//学生信息管理页面 筛选学生按钮
void UIRootMS::on_btnFilter_StudentInfo_clicked()
{
    UIFilterDialog* filterDialog = new UIFilterDialog;
    filterDialog->exec();

    bool isFilter = 0;

    qDebug()<<"筛选 "<<endl;
    if(filterData.precise)  //精确匹配
    {
        if(filterData.name)
        {
            isFilter = 1;
            pModel->setFilter(QString("StudentName='%1'").arg(filterData.precice_text));
        }
        else if(filterData.id)
        {
            isFilter = 1;
            pModel->setFilter(QString("StudentID='%1'").arg(filterData.precice_text));
        }
    }
    else    //范围筛选
    {
        if(filterData.filter_College)
        {
            isFilter = 1;
            pModel->setFilter(QString("StudentCollege='%1'").arg(filterData.college));
        }
        if(filterData.filter_Major)
        {
            isFilter = 1;
            pModel->setFilter(QString("StudentMajor='%1'").arg(filterData.major));
        }
        if(filterData.filter_Class)
        {
            isFilter = 1;
            pModel->setFilter(QString("StudentClass='%1'").arg(filterData.studentclass));
        }
    }

    //刷新显示
    if(isFilter) ui->label_prompt_StudentInfo->setText(QString("共筛选出 %1 名符合条件的学生，详细信息如下：").arg(pModel->rowCount()));
    pModel->select();
    ui->StuInfoView->repaint();
    CleanFilter();      //清空筛选条件

}
//学生信息管理页面 显示全部按钮
void UIRootMS::on_btnFilterClean_StudentInfo_clicked()
{
    CleanFilter();      //清空筛选条件
    ui->label_prompt_StudentInfo->setText("全部学生信息如下：");
    on_btnManageStuInfo_clicked();
}

//学生信息管理页面 添加学生按钮
void UIRootMS::on_btnAdd_StudentInfo_clicked()
{
    int rowNum = pModel->rowCount(); //获得行数
    pModel->insertRow(rowNum); //添加一行
    pModel->setData(pModel->index(rowNum,0),"请输入");
    ui->StuInfoView->setCurrentIndex(pModel->index(rowNum,0));    //跳转到新添加行
    ui->StuInfoView->edit(pModel->index(rowNum,0));    //开始编辑新行
}

//学生信息管理页面 学生按钮
void UIRootMS::on_btnRemove_StudentInfo_clicked()
{
    int curRow = ui->StuInfoView->currentIndex().row();    //获取选中的行
    RemoveLine(curRow);    //删除该行
}

//学生信息管理页面 撤销修改按钮
void UIRootMS::on_btnReverseChange_StudentInfo_clicked()
{
    pModel->revertAll();
}

//学生信息管理页面 保存修改按钮
void UIRootMS::on_btnSaveChange_StudentInfo_clicked()
{
    SaveChange();
}


/*--学生成绩管理页面--*/
void UIRootMS::on_btnManageStuGrade_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_StuGrade);

    int nowLookCourseIndex = ui->boxCourseName->currentIndex(); //当前查看的课程信息在vector中的位置
    qDebug()<<nowLookCourseIndex<<endl;

    pModel->clear();
    pModel->setTable("Course"+allCourse.at(nowLookCourseIndex).first);  // 设置表名
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

//学生成绩管理页面 下拉框改变
void UIRootMS::on_boxCourseName_currentIndexChanged(int index)
{
    on_btnManageStuGrade_clicked();
}

//学生成绩管理页面 添加学生按钮
void UIRootMS::on_btnAdd_StudentGrade_clicked()
{
    int rowNum = pModel->rowCount(); //获得行数
    pModel->insertRow(rowNum); //添加一行
    pModel->setData(pModel->index(rowNum,0),"请输入");
    ui->GradeView->setCurrentIndex(pModel->index(rowNum,0));    //跳转到新添加行
    ui->GradeView->edit(pModel->index(rowNum,0));    //开始编辑新行
}

//学生成绩管理页面 删除学生按钮
void UIRootMS::on_btnRemove_StudentGrade_clicked()
{

    int curRow = ui->GradeView->currentIndex().row();    //获取选中的行
    RemoveLine(curRow);    //删除该行
}

//学生成绩管理页面 撤销修改按钮
void UIRootMS::on_btnReverseChange_StudentGrade_clicked()
{
    pModel->revertAll();
}

//学生成绩管理页面 保存修改按钮
void UIRootMS::on_btnSaveChange_StudentGrade_clicked()
{
    SaveChange();
}




/*--课程信息管理页面--*/
void UIRootMS::on_btnManageCourseInfo_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_CourseInfo);

    pModel->clear();
    pModel->setTable("CourseInfo");  // 设置表名
    pModel->setEditStrategy(QSqlTableModel::OnManualSubmit); //提交模式：手动保存更改
    pModel->select();

    pModel->setHeaderData(0, Qt::Horizontal, "课程号");
    pModel->setHeaderData(1, Qt::Horizontal, "课程名");
    pModel->setHeaderData(2, Qt::Horizontal, "任课教师");
    pModel->setHeaderData(3, Qt::Horizontal, "课程学分");
    pModel->setHeaderData(4, Qt::Horizontal, "课程简介");
    pModel->sort(0, Qt::AscendingOrder); // 第0列升序排序

    ui->CourseInfoView->setModel(pModel);

    //设置列宽
    ui->CourseInfoView->setColumnWidth(0,80);
    ui->CourseInfoView->setColumnWidth(1,150);
    ui->CourseInfoView->setColumnWidth(2,100);
    ui->CourseInfoView->setColumnWidth(3,80);
    ui->CourseInfoView->resizeColumnToContents(4);

    ui->label_CourseInfo->setText(QString("共查询到 %1 门开设课程，详细信息如下：").arg(pModel->rowCount()));
}

//课程信息管理页面 添加课程按钮
void UIRootMS::on_btnAdd_CourseInfo_clicked()
{
    int rowNum = pModel->rowCount(); //获得行数
    pModel->insertRow(rowNum); //添加一行
    pModel->setData(pModel->index(rowNum,0),"请输入");
    ui->CourseInfoView->setCurrentIndex(pModel->index(rowNum,0));    //跳转到新添加行
    ui->CourseInfoView->edit(pModel->index(rowNum,0));    //开始编辑新行
}

//课程信息管理页面 删除课程按钮
void UIRootMS::on_btnRemove_CourseInfo_clicked()
{
    int curRow = ui->CourseInfoView->currentIndex().row();    //获取选中的行
    RemoveLine(curRow);    //删除该行
}

//课程信息管理页面 撤销修改按钮
void UIRootMS::on_btnReverseChange_CourseInfo_clicked()
{
    pModel->revertAll();
}

//课程信息管理页面 保存修改按钮
void UIRootMS::on_btnSaveChange_CourseInfo_clicked()
{
    SaveChange();
}


/*--用户账户管理页面--*/
void UIRootMS::on_btnManageAccount_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_UserAccount);

    pModel->clear();
    pModel->setTable("Account");  // 设置表名
    pModel->setEditStrategy(QSqlTableModel::OnManualSubmit); //提交模式：手动保存更改
    pModel->select();

    pModel->setHeaderData(0, Qt::Horizontal, "姓名");
    pModel->setHeaderData(1, Qt::Horizontal, "性别");
    pModel->setHeaderData(2, Qt::Horizontal, "学/工号");
    pModel->setHeaderData(3, Qt::Horizontal, "密码");
    pModel->setHeaderData(4, Qt::Horizontal, "用户权限");
    pModel->setHeaderData(5, Qt::Horizontal, "单位");
    pModel->sort(2, Qt::AscendingOrder); // 按学号升序排序

    ui->AccountView->setModel(pModel);

    //设置列宽
    ui->AccountView->setColumnWidth(0,100);
    ui->AccountView->setColumnWidth(1,60);
    ui->AccountView->setColumnWidth(2,100);
    ui->AccountView->setColumnWidth(3,100);
    ui->AccountView->setColumnWidth(4,80);
    ui->AccountView->setColumnWidth(5,200);
}

//用户账户管理页面 查找用户按钮
void UIRootMS::on_btnFind_UserAccount_clicked()
{
    bool ok;
    QInputDialog *inputDialog = new QInputDialog(this);
    QString id = inputDialog->getText(this,"用户查找","请输入用户的学/工号",QLineEdit::Normal,"",&ok);

    if(ok && id.size())
    {
        pModel->setFilter(QString("userID='%1'").arg(id));

        //刷新显示
        pModel->select();
        ui->label_prompt_Account->setText(QString("共查询到 %1 名符合条件的用户，详细信息如下：").arg(pModel->rowCount()));
    }
}

//用户账户管理页面 显示全部按钮
void UIRootMS::on_btnFindClean_UserAccount_clicked()
{
    on_btnManageAccount_clicked();
    ui->label_prompt_Account->setText("系统中全部可登陆账户如下：");
}

//用户账户管理页面 添加账户按钮
void UIRootMS::on_btnAdd_UserAccount_clicked()
{
    int rowNum = pModel->rowCount(); //获得行数
    pModel->insertRow(rowNum); //添加一行
    pModel->setData(pModel->index(rowNum,0),"请输入");
    ui->AccountView->setCurrentIndex(pModel->index(rowNum,0));    //跳转到新添加行
    ui->AccountView->edit(pModel->index(rowNum,0));    //开始编辑新行
}

//用户账户管理页面 删除账户按钮
void UIRootMS::on_btnRemove_UserAccount_clicked()
{
    int curRow = ui->AccountView->currentIndex().row();    //获取选中的行
    RemoveLine(curRow);    //删除选中行
}

//用户账户管理页面 撤销修改按钮
void UIRootMS::on_btnReverseChange_UserAccount_clicked()
{
    pModel->revertAll();
}

//用户账户管理页面 保存修改按钮
void UIRootMS::on_btnSaveChange_UserAccount_clicked()
{
    SaveChange();
}
