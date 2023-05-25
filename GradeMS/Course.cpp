#include "Course.h"

Course::Course()
{

}

Course::Course(QString courseNumber, QString courseName, QString courseTeacher, QString credit, QString courseIntro)
{
    this->courseNumber = courseNumber;
    this->courseName = courseName;
    this->courseTeacher = courseTeacher;
    this->credit = credit;
    this->courseIntro = courseIntro;
}

QString Course::getCourseNumber()
{
    return courseNumber;
}

QString Course::getCourseName()
{
    return courseName;
}

QString Course::getCourseTeacher()
{
    return courseTeacher;
}

QString Course::getCredit()
{
    return credit;
}

QString Course::getCourseIntro()
{
    return courseIntro;
}
