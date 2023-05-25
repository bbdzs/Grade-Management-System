#include "UIFilterDialog.h"
#include "ui_UIFilterDialog.h"

UIFilterDialog::UIFilterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UIFilterDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("学生信息筛选");
}

UIFilterDialog::~UIFilterDialog()
{
    delete ui;
}

void UIFilterDialog::on_pushButton_clicked()
{
    //将数据传回root界面
    extern FilterData filterData;

    //范围筛选
    if(ui->checkBox_College->isChecked())   //按学院筛选
    {
        filterData.filter_College = 1;
        filterData.college = ui->edit_College->text();
    }
    if(ui->checkBox_Major->isChecked())   //按专业筛选
    {
        filterData.filter_Major = 1;
        filterData.major = ui->edit_Major->text();
    }
    if(ui->checkBox_Class->isChecked())   //按班级筛选
    {
        filterData.filter_Class = 1;
        filterData.studentclass = ui->edit_Class->text();
    }

    //精确匹配
    if(ui->radioButton_name->isChecked())   //查找姓名
    {
        filterData.precise = 1;
        filterData.name = 1;
        filterData.precice_text = ui->edit_Find->text();
    }
    else if(ui->radioButton_id->isChecked())   //查找id
    {
        filterData.precise = 1;
        filterData.id = 1;
        filterData.precice_text = ui->edit_Find->text();
    }

    this->close();


}

void UIFilterDialog::on_pushButton_2_clicked()
{
    this->close();
}
