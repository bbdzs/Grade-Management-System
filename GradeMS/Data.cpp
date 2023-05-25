#include "Data.h"
#include <QMessageBox>

Data::Data()
{

}

//连接数据库
void Data::ConnectDatabase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString path = QCoreApplication::applicationDirPath() + "/GradeMS.db";
    db.setDatabaseName(path);
    //QMessageBox::StandardButton MsgPath = QMessageBox::information(NULL, "数据库路径",path);
    if(!db.open())
    {
        qDebug()<<endl<<" open error "<<endl;
        QSqlError lastError = db.lastError();
        QString message = "数据库打开失败（创建测试项）！错误原因："+lastError.driverText();
        qDebug()<<db.lastError().text();
    }
    else

        qDebug()<<endl<< " open success! ";
}

void Data::CloseDatabase()
{
    db.close();
}

//读入本人信息 身份信息和课程分数
void Data::addMyStuInfo()
{
    extern User user;
    Student s(user.getName(), user.getGender(), user.getID(), user.getCollege());

    ConnectDatabase();

    //读入专业 班级信息
    QString sql=QString("SELECT * FROM StudentInfo WHERE StudentID='%1'")
               .arg(s.getID());
    QSqlQuery query(db);
    if (query.exec(sql))
    {
        query.next();
        s.setMajor(query.value(4).toString());
        s.setClass(query.value(5).toString());
    }
    qDebug()<<"MyStuInfo:"<<s.getName()<<" "<<s.getGender()<<" "<<s.getID()<<" "<<s.getCollege()<<" "<<s.getMajor()<<" "<<s.getClass()<<endl;

    //读入本人课程信息
    sql=QString("SELECT * FROM StudentSelectCourse WHERE StudentID='%1'")
               .arg(s.getID());
    if (query.exec(sql))
    {
        qDebug()<<"MyCourseScore:"<<endl;

        while(query.next())
        {
            QString learnCourseNumber = query.value(2).toString();
            QString learnCourseName = query.value(3).toString();

            //读入课程得分
            QString sql2=QString("SELECT * FROM %1 WHERE studentID='%2'")
                    .arg("Course"+learnCourseNumber).arg(s.getID());
            qDebug()<<sql2<<endl;
            QString score, isLack;
            if(query.exec(sql2))            //同一个连接进行新的查询
            {
                qDebug()<<"query2"<<endl;
                query.next();
                score = query.value(5).toString();
                isLack = query.value(6).toString();
            }

            s.addLearnCourse(learnCourseNumber, learnCourseName, score, isLack);
            qDebug()<<learnCourseNumber<<" "<<learnCourseName<<" "<<score<<" "<<isLack<<endl;

            //回到原来查询的位置
            query.exec(sql);
            int t = s.learnCourseCount;
            while(t){ query.next(); t--; }
        }
    }

    CloseDatabase();

    //加入vetor进行存储
    vstu.push_back(s);
}

void Data::getMyInfo(Student &me)
{
    me = vstu.at(0);
}

void Data::getMyInfo(Teacher &me)
{
    me = vtea.at(0);
}

Course Data::getCourseInfo(QString courseNumber)
{
    for(int i = 0; i < vcourse.size(); i++)
    {
        if(vcourse.at(i).getCourseNumber() == courseNumber)
            return vcourse.at(i);
    }
}


//读取所有开设课程
void Data::addAllCourse()
{
    ConnectDatabase();

    QString sql=QString("SELECT * FROM CourseInfo");
    QSqlQuery query(db);
    if (query.exec(sql))
    {
        qDebug()<<"AllCourse:"<<endl;
        while(query.next())
        {
            QString courseNumber = query.value(0).toString();
            QString courseName = query.value(1).toString();
            QString courseTeacher = query.value(2).toString();
            QString credit = query.value(3).toString();
            QString courseIntro = query.value(4).toString();

            Course c(courseNumber, courseName, courseTeacher, credit, courseIntro);
            vcourse.push_back(c);
            qDebug()<<courseNumber<<" "<<courseName<<" "<<courseTeacher<<" "<<credit<<" "<<courseIntro<<endl;
        }
    }



    CloseDatabase();
}

//向model中添加学生考试成绩 用于显示到tableview中
void Data::getStuCoursesScore(QStandardItemModel *model)
{
    //设置列数量 列名
    model->setColumnCount(6);
    model->setHeaderData(0,Qt::Horizontal, "学号");
    model->setHeaderData(1,Qt::Horizontal, "姓名");
    model->setHeaderData(2,Qt::Horizontal, "性别");
    model->setHeaderData(3,Qt::Horizontal, "课程名称");
    model->setHeaderData(4,Qt::Horizontal, "课程分数");
    model->setHeaderData(5,Qt::Horizontal, "是否缺考");

    //设置行
    Student me = vstu.at(0);
    qDebug()<<"共选择"<<me.learnCourseCount<<"门课"<<endl;
    model->setRowCount(me.learnCourseCount);        //设置行数
    for(int i = 0; i < me.learnCourseCount; i++)
    {
        perCourse pc;
        pc = me.getStuCourse(i);        //获取学生选择的第i门课程
        model->setItem(i, 0, new QStandardItem(me.getID()));
        model->setItem(i, 1, new QStandardItem(me.getName()));
        model->setItem(i, 2, new QStandardItem(me.getGender()));
        model->setItem(i, 3, new QStandardItem(pc.learnCourseName));
        model->setItem(i, 4, new QStandardItem(pc.score));
        model->setItem(i, 5, new QStandardItem(pc.isLack));
    }
}

void Data::getStuCoursesInfo(QStandardItemModel *model)
{
    //设置列数量 列名
    model->setColumnCount(5);
    model->setHeaderData(0,Qt::Horizontal, "课程号");
    model->setHeaderData(1,Qt::Horizontal, "课程名称");
    model->setHeaderData(2,Qt::Horizontal, "任课教师");
    model->setHeaderData(3,Qt::Horizontal, "课程学分");
    model->setHeaderData(4,Qt::Horizontal, "课程简介");

    //设置行
    Student me = vstu.at(0);
    qDebug()<<"共选择"<<me.learnCourseCount<<"门课"<<endl;
    model->setRowCount(me.learnCourseCount);        //设置行数
    for(int i = 0; i < me.learnCourseCount; i++)
    {
        perCourse pc;
        pc = me.getStuCourse(i);                            //获取学生选择的第i门课程
        Course cs = getCourseInfo(pc.learnCourseNumber);    //获得此课程的详细信息
        model->setItem(i, 0, new QStandardItem(pc.learnCourseNumber));
        model->setItem(i, 1, new QStandardItem(cs.getCourseName()));
        model->setItem(i, 2, new QStandardItem(cs.getCourseTeacher()));
        model->setItem(i, 3, new QStandardItem(cs.getCredit()));
        model->setItem(i, 4, new QStandardItem(cs.getCourseIntro()));

    }
}

