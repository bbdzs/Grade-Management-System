#include "Teacher.h"

Teacher::Teacher()
{
    teachCourseCount = 0;
}

void Teacher::addTeachCourse(QString CourseNumber, QString CourseName)
{
    myCourse.push_back(std::make_pair(CourseNumber, CourseName));

    teachCourseCount++; //个人所学课程计数器++
}

QString Teacher::getCourseNumber(int num)
{
        return myCourse.at(num).first;
}

QString Teacher::getCourseName(int num)
{
        return myCourse.at(num).second;
}
