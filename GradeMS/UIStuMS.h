#ifndef UISTUMS_H
#define UISTUMS_H

#include <QMainWindow>
#include "Data.h"
#include "User.h"
#include "Student.h"
#include "Teacher.h"
#include "Course.h"

extern User user;

namespace Ui {
class UIStuMS;
}

class UIStuMS : public QMainWindow
{
    Q_OBJECT

public:
    explicit UIStuMS(QWidget *parent = nullptr);
    ~UIStuMS();

private slots:
    void timeUpdate();

    void on_btnLookPersonInfo_clicked();

    void on_btnLookPersonGrade_clicked();

    void on_btnSelectedCourse_clicked();

private:
    Ui::UIStuMS *ui;
};

#endif // UISTUMS_H
