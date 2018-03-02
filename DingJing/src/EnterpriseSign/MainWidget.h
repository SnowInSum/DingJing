#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "BusinessCard.h"
#include "SignCard.h"

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();

protected:
    void InitWidgetLayout();

private slots:
    void on_admin_login_clicked();

private:
    Ui::MainWidget *ui;

    int widthSize;
    int heightSize;

    BusinessCard *one;
    BusinessCard *two;
    BusinessCard *three;

    SignCard *signPerson;
};

#endif // MAINWIDGET_H
