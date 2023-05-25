#include "UILogin.h"
#include "Data.h"
#include <QApplication>
#include "User.h"
#include <vector>

//初始化静态成员变量
std::vector<Student> Data::vstu;
std::vector<Teacher> Data::vtea;
std::vector<Course> Data::vcourse;

//全局User类对象
User user;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UILogin lg;
    lg.show();
    return a.exec();
}
