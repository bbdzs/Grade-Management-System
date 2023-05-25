#ifndef UITEAMS_H
#define UITEAMS_H

#include <QMainWindow>
#include <QSqlTableModel>
#include "Data.h"
#include "User.h"
#include "Student.h"
#include "Teacher.h"
#include "Course.h"

extern User user;

namespace Ui {
class UITeaMS;
}

class UITeaMS : public QMainWindow
{
    Q_OBJECT

public:
    explicit UITeaMS(QWidget *parent = nullptr);
    ~UITeaMS();

private slots:
    void timeUpdate();

    void on_btnLookClassGrade_clicked();

    void on_btnLookPersonInfo_clicked();

    void on_boxCourseName_currentIndexChanged(int index);

    void on_btnReverseChange_clicked();

    void on_btnSaveChange_clicked();

    void on_btnRemoveStudent_clicked();

    void on_btnAddStudent_clicked();

private:
    Data data;
    QSqlTableModel *pModel;
    std::vector< std::pair<QString, QString> > myTeachCourse;   //vector+pair存老师的教学课程 第一维课程ID  第二维课程名称

    Ui::UITeaMS *ui;
};

#endif // UITEAMS_H
