#ifndef FILTERDIALOG_H
#define FILTERDIALOG_H

#include <QDialog>
#include "UIRootMS.h"

namespace Ui {
class UIFilterDialog;
}

class UIFilterDialog : public QDialog
{
    Q_OBJECT

public:
    UIFilterDialog(QWidget *parent = nullptr);
    ~UIFilterDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::UIFilterDialog *ui;
};

#endif // FILTERDIALOG_H
