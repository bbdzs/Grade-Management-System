#ifndef USER_H
#define USER_H

#include <QObject>
#include <QWidget>
#include <vector>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Data.h"

class User : public Person
{
public:
    User();
    User(int permission);

    int getPermission();
    void setPermission(int permission);

private:
    int permission;             //用户权限 0学生 1教师 2管理员


};

#endif // USER_H
