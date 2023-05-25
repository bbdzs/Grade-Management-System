#include "Person.h"

Person::Person()
{

}

Person::Person(QString name, QString personID)
{
    this->name = name;
    this->personID = personID;
}

Person::Person(QString name, QString gender, QString personID, QString college)
{
    this->name = name;
    this->gender = gender;
    this->personID = personID;
    this->college = college;
}

QString Person::getName()
{
    return name;
}

QString Person::getGender()
{
    return gender;
}

QString Person::getID()
{
    return personID;
}

QString Person::getCollege()
{
    return college;
}

void Person::setName(QString name)
{
    this->name = name;
}

void Person::setGender(QString gender)
{
    this->gender = gender;
}

void Person::setID(QString personID)
{
    this->personID = personID;
}

void Person::setCollege(QString college)
{
    this->college = college;
}
