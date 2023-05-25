#include "User.h"

User::User()
{

}

int User::getPermission()
{
    return permission;
}

void User::setPermission(int permission)
{
    this->permission = permission;
}

