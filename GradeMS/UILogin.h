#ifndef UILOGIN_H
#define UILOGIN_H

#include <QMainWindow>
#include <QSqlDatabase> //数据驱动
#include <QSqlQuery>    //数据库执行语句
#include <QMessageBox>  //消息盒子
#include <QSqlError>    //报错提示
#include <QDebug>
#include "Data.h"
#include "UIChangePswd.h"
#include "UIStuMS.h"
#include "UITeaMS.h"
#include "UIRootMS.h"

extern User user;

QT_BEGIN_NAMESPACE
namespace Ui { class UILogin; }
QT_END_NAMESPACE

class UILogin : public QMainWindow
{
    Q_OBJECT

public:
    UILogin(QWidget *parent = nullptr);
    ~UILogin();

private slots:

    void on_buttonLogin_clicked();

    void on_buttonChangepswd_clicked();

private:
    Ui::UILogin *ui;
};



#endif // UILOGIN_H
