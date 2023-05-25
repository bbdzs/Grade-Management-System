#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>
#include <QWidget>
#include <vector>
#include "Person.h"

class perCourse
{
public:
    QString learnCourseNumber;  //课程号
    QString learnCourseName;    //课程名
    QString score;              //本课程得分
    QString isLack;             //是否缺考

};

class Student : public Person
{
public:
    Student();
    Student(QString name, QString gender, QString personID, QString college);

    void setMajor(QString major);
    void setClass(QString studentClass);

    //添加一门所学课程的信息 score isLack可不填
    void addLearnCourse(QString learnCourseNumber, QString learnCourseName, QString score = "-1", QString isLack = "");

    // 查询该学生是否选了课程号为CourseNumber的课程 找到了则返回该课程在vector的下标 未找到返回-1
    int findStuCourse(QString CourseNumber);

    //获取该学生第num课的信息
    perCourse getStuCourse(int num);

    QString getMajor();
    QString getClass();

    //获取该学生课程号为CourseNumber的课程信息    异常处理throw 未选择此课程, 调用时try catch接收
    perCourse getStuCourse(QString CourseNumber);

    int learnCourseCount;                       //所学课程数量

private:
    QString major;                              //专业
    QString studentClass;                       //学生所在班级
    std::vector<perCourse> LearnCourse;         //所学每门课的信息
};

#endif // STUDENT_H
