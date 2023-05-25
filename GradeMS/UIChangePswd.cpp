#include "UIChangePswd.h"
#include "ui_UIChangePswd.h"
#include <QGraphicsDropShadowEffect>

UIChangePswd::UIChangePswd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UIChangePswd)
{
    ui->setupUi(this);
    setWindowTitle("西南大学 学生成绩管理系统 - 修改密码");
    setWindowIcon(QIcon(":/main/res/icon.ico"));

    //鼠标经过时手型图标
    ui->ButtonReturn->setCursor(QCursor(Qt::PointingHandCursor));
    ui->ButtonSure->setCursor(QCursor(Qt::PointingHandCursor));

    //登录界面显示图片
    //设置图片
    QPixmap *pix = new QPixmap(":/loginImg/res/swumotto.png");
    QSize sz = ui->CgPswdImg->size();
    ui->CgPswdImg->setPixmap(pix->scaled(sz));

    //设置图片阴影效果
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(this);
    shadow->setOffset(3, 0);
    shadow->setColor(QColor("#888888"));
    shadow->setBlurRadius(30);
    ui->CgPswdImg->setGraphicsEffect(shadow);

}

UIChangePswd::~UIChangePswd()
{
    delete ui;
}

//返回登录界面
void UIChangePswd::on_ButtonReturn_clicked()
{
    UILogin *lg = new UILogin;
    lg->show();
    this->close();
}

//点击确定修改按钮
void UIChangePswd::on_ButtonSure_clicked()
{    
    Data data;
    data.ConnectDatabase();

    //获取输入信息
    QString username = ui->textUserName->text();
    QString userID = ui->textUserID->text();
    QString oldpswd = ui->textUserOldPswd->text();
    QString password = ui->textUserPswd_1->text();
    QString surepswd = ui->textUserPswd_2->text();

    qDebug()<<" "<<username<<" "<<userID<<" "<<oldpswd<<" "<<" "<<password<<" "<<surepswd<<endl;

    //判断及修改密码
    if(username.size() == 0 || userID.size() == 0)
    {
         QMessageBox::information(this,"修改密码","身份信息不能为空，请输入！");
    }
    else if(oldpswd.size() == 0)
    {
         QMessageBox::information(this,"修改密码","原密码不能为空，请输入！");
    }
    else if(password.size() == 0)
    {
         QMessageBox::information(this,"修改密码","新密码不能为空，请输入！");
    }
    else if(surepswd.size() == 0)
    {
         QMessageBox::information(this,"修改密码","请再次输入新密码！");
    }
    else if(password == surepswd)
    {
        QString sql=QString("SELECT * FROM Account WHERE userName='%1' AND userID='%2' AND passwd='%3'")
               .arg(username).arg(userID).arg(oldpswd);
        //创建执行语句对象 查询数据库
        QSqlQuery query(data.db);
        if(query.exec(sql))
        {
            query.next();
            //判断执行结果
            if(query.value(1).toString().size() != 0)   //与数据库比对成功
            {
                qDebug()<<"identity sure";

                sql=QString("UPDATE Account SET passwd='%1' WHERE userID='%2'")
                               .arg(password).arg(userID);
                query.exec(sql);

                QMessageBox::information(this,"修改密码","密码修改成功！");

                //跳转到登录界面
                UILogin *lg = new UILogin;
                lg->show();
                data.CloseDatabase();   //关闭数据库连接
                this->close();
            }
            else
            {
                qDebug()<<"identity error";
                QMessageBox::information(this,"修改密码","身份信息输入有误，请重新输入！");
            }
        }
    }
    else if(password != surepswd)
    {
        QMessageBox::information(this,"修改密码","两次密码输入不一致，请检查！");
    }
    data.CloseDatabase();   //关闭数据库连接
}
