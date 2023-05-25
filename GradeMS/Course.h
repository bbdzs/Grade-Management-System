#ifndef COURSE_H
#define COURSE_H

#include <QObject>
#include <QWidget>

class Course
{
public:
    Course();
    Course(QString courseNumber, QString courseName, QString courseTeacher, QString credit, QString courseIntro);

    QString getCourseNumber();
    QString getCourseName();
    QString getCourseTeacher();
    QString getCredit();
    QString getCourseIntro();

private:
    QString courseNumber;   //课程号
    QString courseName;     //课程名
    QString courseTeacher;  //任课教师
    QString credit;         //学分
    QString courseIntro;    //课程简介


};

#endif // COURSE_H
