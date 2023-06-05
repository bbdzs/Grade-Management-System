# Grade Management System

## 简介

学生成绩管理系统，是本人大二上C++课程设计的作品。此系统基于 C++ QT 和 Sqlite 数据库实现。

此系统拥有账户登录系统，可以登录和修改密码操作。系统内容包含三种身份账户，分别给管理员、教师、学生设计了不同的权限和功能。还有对成绩、课程、个人信息的查看、筛选和管理功能。详细的功能结构图、类图、流程图已放在“Diagrams”文件夹中。

由于此时还没有学习数据库课程，只是自学了一些简单的SQL语句和用法。使用数据库只是为了代替从文件中读写，写代码更方便。因此数据库的部分表、字段的设计不太符合关系数据库的惯例。此外，开发时间较短，不足之处，敬请谅解。

---

## 运行说明

运行时，GradeMS.db数据库文件应放在release/debug文件夹下，即exe所在文件夹中。若.db数据库文件放在.pro文件所在目录中将无法读取数据库导致程序出错。

初始状态有三个测试账户：

1、用户名：root，密码：root，权限：超级管理员

2、用户名：202100001，密码：cqz，权限：学生

3、用户名：20201234，密码：123，权限：老师

--- 

## 部分文件（夹）说明

"GradeMS"文件夹是项目文件夹，包含项目所有源码和资源

"Diagrams"文件夹存放类图、功能图、流程图

"Run_screenshot"文件夹存放运行截图，展示了运行效果

"GradeMS.exe"是打包好的独立可执行文件

--- 

开发平台：Windows 10 22H2

编程语言：C++

IDE: Qt 5.15.2

Kit: Desktop Qt 5.15.2 MinGW 32-bit

--- 
## 部分截图

登录界面:
![](https://github.com/bbdzs/Grade-Management-System/raw/main/Run_screenshot/1Login.png)

修改密码界面:
![](https://github.com/bbdzs/Grade-Management-System/raw/main/Run_screenshot/2ChangePswd.png)

管理员端-课程信息管理界面:
![](https://github.com/bbdzs/Grade-Management-System/raw/main/Run_screenshot/root-CourseInfoManagement.png)

学生端-个人成绩查看界面:
![](https://github.com/bbdzs/Grade-Management-System/raw/main/Run_screenshot/stu-MyGrade.png)

学生端-个人信息查看界面:
![](https://github.com/bbdzs/Grade-Management-System/raw/main/Run_screenshot/stu-MyInfo.png)

教师端-班级成绩管理界面:
![](https://github.com/bbdzs/Grade-Management-System/raw/main/Run_screenshot/tea-ClassGrade.png)



