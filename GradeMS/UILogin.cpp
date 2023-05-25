#include "UILogin.h"
#include "ui_UILogin.h"
#include <QGraphicsDropShadowEffect>
#include "User.h"

QSqlDatabase Data::db = QSqlDatabase::addDatabase("QSQLITE");

UILogin::UILogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UILogin)
{
    ui->setupUi(this);
    setWindowTitle("西南大学 学生成绩管理系统");
    setWindowIcon(QIcon(":/main/res/icon.ico"));

    //登录界面显示图片
    //设置图片
    QPixmap *pix = new QPixmap(":/loginImg/res/blue.png");
    QSize sz = ui->loginImage->size();
    ui->loginImage->setPixmap(pix->scaled(sz));

    //设置图片阴影效果
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(this);
    shadow->setOffset(3, 0);
    shadow->setColor(QColor("#888888"));
    shadow->setBlurRadius(30);
    ui->loginImage->setGraphicsEffect(shadow);
}

UILogin::~UILogin()
{
    delete ui;
}


void UILogin::on_buttonLogin_clicked()
{
    Data data;
    data.ConnectDatabase();

    //获取输入信息
    QString userID = ui->textLoginID->text();
    QString password = ui->textLoginPasswd->text();

    //查询数据库
    if(userID == "")
        QMessageBox::warning(this,"","用户名不能为空！");
    else if(password == "")
        QMessageBox::warning(this,"","密码不能为空！");
    else
    {
        QString sql=QString("SELECT * FROM Account WHERE userID='%1' AND passwd='%2' ")
                   .arg(userID).arg(password);

        //执行sql语句
        QSqlQuery query(data.db);
        if (query.exec(sql))
        {
            query.next();
            //判断执行结果
            if(query.value(0).toString().size() == 0)
            {
                qDebug()<<"Login error";
                QMessageBox::information(this,"登录认证","登录失败,用户名或者密码错误!");
            }
            else
            {
                qDebug()<<"Login success";
                QMessageBox::information(this,"登录认证","登录成功!");

                //设置账户权限
                if(query.value(4).toString() == "stu") user.setPermission(0);
                else if(query.value(4).toString() == "tea") user.setPermission(1);
                else if(query.value(4).toString() == "root") user.setPermission(2);

                //填入登陆者信息：学/工号 姓名 性别
                user.setID(userID);
                user.setName(query.value(0).toString());
                user.setGender(query.value(1).toString());
                user.setCollege(query.value(5).toString());

                qDebug()<<"user info:"<<user.getName()<<" "<<user.getID()<<" "<<user.getGender()<<" "<<user.getCollege()<<endl;

                //登录成功后可以跳转到其他页面
                data.CloseDatabase();   //关闭数据库连接
                if(user.getPermission() == 0)   //用户为学生
                {
                    qDebug()<<"stu login!"<<endl;
                    UIStuMS *stums = new UIStuMS;
                    stums->show();
                }
                else if(user.getPermission() == 1)  //用户为老师
                {
                    qDebug()<<"tea login!"<<endl;
                    UITeaMS *teams = new UITeaMS;
                    teams->show();
                }
                else if(user.getPermission() == 2)  //用户为管理员
                {
                    qDebug()<<"root login!"<<endl;
                    UIRootMS *rootms = new UIRootMS;
                    rootms->show();
                }

                this->close();  //关闭登录界面
            }
        }
    }
    data.CloseDatabase();   //关闭数据库连接

}

void UILogin::on_buttonChangepswd_clicked()
{
    {

        this->close();
        UIChangePswd *CPswd = new UIChangePswd;
        CPswd->show();
    }
}
