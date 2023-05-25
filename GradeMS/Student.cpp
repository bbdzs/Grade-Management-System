#include "Student.h"

Student::Student()
{
    learnCourseCount = 0;   //初始计数器是0 随读入的数据增加计数
}

Student::Student(QString name, QString gender, QString personID, QString college) : Person(name, gender, personID, college)
{
    learnCourseCount = 0;
}

void Student::setMajor(QString major)
{
    this->major = major;
}

QString Student::getMajor()
{
    return major;
}

void Student::setClass(QString studentClass)
{
    this->studentClass = studentClass;
}

QString Student::getClass()
{
    return studentClass;
}

void Student::addLearnCourse(QString learnCourseNumber, QString learnCourseName, QString score, QString isLack)
{
    perCourse p;
    p.learnCourseNumber = learnCourseNumber;
    p.learnCourseName = learnCourseName;
    p.score = score;
    p.isLack = isLack;
    LearnCourse.push_back(p);

    learnCourseCount++; //个人所学课程计数器++

}

int Student::findStuCourse(QString CourseNumber)
{
    for(int i = 0; i < LearnCourse.size(); i++)
    {
        if(LearnCourse.at(i).learnCourseNumber == CourseNumber)
            return i;
    }
    return -1;
}

perCourse Student::getStuCourse(int num)
{
    return LearnCourse.at(num);
}

perCourse Student::getStuCourse(QString CourseNumber)
{
    int index = findStuCourse(CourseNumber);
    if(index = -1) throw("该生未选择此课程");
    return getStuCourse(index);

}
