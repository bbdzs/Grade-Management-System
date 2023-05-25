#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QWidget>

class Person            //基本属性
{
public:
    Person();
    Person(QString name, QString personID);         //部分超级管理员账号可能没有性别、学院，不是个人对应的账号
    Person(QString name, QString gender, QString personID, QString college);

    QString getName();
    QString getGender();
    QString getID();
    QString getCollege();

    void setName(QString name);
    void setGender(QString gender);
    void setID(QString id);
    void setCollege(QString college);

private:
    QString name;       //名称
    QString gender;     //性别
    QString personID;   //学/工号
    QString college;    //所属学院
};

#endif // PERSON_H
