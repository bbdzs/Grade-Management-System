#ifndef UICHANGEPSWD_H
#define UICHANGEPSWD_H

#include <QWidget>
#include "UILogin.h"
#include "Data.h"

namespace Ui {
class UIChangePswd;
}

class UIChangePswd : public QWidget
{
    Q_OBJECT

public:
    explicit UIChangePswd(QWidget *parent = nullptr);
    ~UIChangePswd();

private slots:
    void on_ButtonReturn_clicked();

    void on_ButtonSure_clicked();

private:
    Ui::UIChangePswd *ui;
};

#endif // CHANGEPSWD_H
