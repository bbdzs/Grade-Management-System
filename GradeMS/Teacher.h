#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>
#include <QWidget>
#include <vector>
#include "Person.h"

class Teacher : public Person
{
public:
    Teacher();

    void addTeachCourse(QString CourseNumber, QString CourseName);      //添加教学课程 使用时去Course储存中查找课程号获取信息
    QString getCourseNumber(int num);               //获取教的第num门课的课程号
    QString getCourseName(int num);               //获取教的第num门课的课程名称

    int teachCourseCount;                   //所教课程数量

private:
    std::vector< std::pair<QString, QString> > myCourse;      //所教课程 第一维课程ID  第二维课程名称
};

#endif // TEACHER_H
