#ifndef DATA_H
#define DATA_H

#include <QSqlDatabase> //数据驱动
#include <QSqlQuery>    //数据库执行语句
#include <QMessageBox>  //消息盒子
#include <QSqlError>    //报错提示
#include <QCoreApplication>
#include <QDebug>
#include <QStandardItemModel>
#include <vector>
#include "User.h"
#include "Teacher.h"
#include "Student.h"
#include "Course.h"

class Data
{
public:
    Data();

    void ConnectDatabase();             //连接数据库
    void CloseDatabase();

    void addMyStuInfo();                //学生用户 添加本人信息
    void addMyTeaInfo();                //教师用户 添加本人信息
    void addStuInfo();                  //添加其他学生信息
    void addTeaInfo();                  //添加其他教师信息
    void addAllCourse();                //添加学校开设的所有课程

    void getMyInfo(Student& me);         //获取用户本人信息
    void getMyInfo(Teacher& me);         //获取用户本人信息

    Course getCourseInfo(QString courseNumber); //获取某课程的详细信息 按课程号查询

    void getStuCoursesScore(QStandardItemModel* model); //获取学生考试成绩 调用后传入需要显示的Model进行处理，随后可直接显示到Tableview
    void getStuCoursesInfo(QStandardItemModel* model);  //获取学生选课信息

    static QSqlDatabase db;             //数据库文件

private:
    static std::vector<Teacher> vtea;   //存放读取的所有教师的信息
    static std::vector<Student> vstu;   //存放读取的所有学生的信息
    static std::vector<Course> vcourse; //存放读取的所有课程的信息

};


#endif // DATA_H
