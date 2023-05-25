#ifndef UIROOTMS_H
#define UIROOTMS_H

#include <QMainWindow>
#include <QSqlTableModel>
#include "Data.h"
#include "User.h"
#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include "UIFilterDialog.h"

namespace Ui {
class UIRootMS;
}

extern User user;

struct FilterData   //存储筛选条件
{
    //范围筛选
    bool filter_College;
    bool filter_Major;
    bool filter_Class;
    QString college;
    QString major;
    QString studentclass;

    //精确匹配
    bool precise;
    bool name;      //按姓名匹配
    bool id;        //按学/工号匹配
    QString precice_text;

};

class UIRootMS : public QMainWindow
{
    Q_OBJECT

public:
    explicit UIRootMS(QWidget *parent = nullptr);
    ~UIRootMS();

private slots:
    void timeUpdate();

    void on_btnManagePersonInfo_clicked();

    void on_btnManageStuInfo_clicked();

    void on_btnManageStuGrade_clicked();

    void on_btnManageCourseInfo_clicked();

    void on_btnManageAccount_clicked();

    void on_btnFilter_StudentInfo_clicked();

    void on_btnFilterClean_StudentInfo_clicked();

    void on_btnAdd_StudentInfo_clicked();

    void on_btnRemove_StudentInfo_clicked();

    void on_btnReverseChange_StudentInfo_clicked();

    void on_btnSaveChange_StudentInfo_clicked();

    void on_boxCourseName_currentIndexChanged(int index);

    void on_btnAdd_StudentGrade_clicked();

    void on_btnRemove_StudentGrade_clicked();

    void on_btnReverseChange_StudentGrade_clicked();

    void on_btnSaveChange_StudentGrade_clicked();

    void on_btnAdd_CourseInfo_clicked();

    void on_btnRemove_CourseInfo_clicked();

    void on_btnReverseChange_CourseInfo_clicked();

    void on_btnSaveChange_CourseInfo_clicked();

    void on_btnFind_UserAccount_clicked();

    void on_btnFindClean_UserAccount_clicked();

    void on_btnAdd_UserAccount_clicked();

    void on_btnRemove_UserAccount_clicked();

    void on_btnReverseChange_UserAccount_clicked();

    void on_btnSaveChange_UserAccount_clicked();

private:
    void ReadCourseInfo();    //读入学校开设的全部课程信息
    void CleanFilter();
    void SaveChange();
    void RemoveLine(int curRow);

    Ui::UIRootMS *ui;
    Data data;
    QSqlTableModel *pModel;
    std::vector< std::pair<QString, QString> > allCourse;   //vector+pair存所有开设课程 第一维课程ID  第二维课程名称
};

#endif // UIROOTMS_H
