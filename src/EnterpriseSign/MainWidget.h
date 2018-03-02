#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QTimer>
#include <QDateTime>
#include <QThread>
#include <QImage>
#include <QPixmap>
#include <QCloseEvent>
#include "BusinessCard.h"
#include "SignCard.h"
#include "OpencvCamera.h"

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
    void IniSignCardLayout();
    void timeStart();
    void cameraStart();
    virtual void closeEvent(QCloseEvent* event);

private slots:
    void on_admin_login_clicked();
    void on_time_update();
    void on_background_update(QImage image);

private:
    Ui::MainWidget *ui;

    int widthSize;
    int heightSize;
    QTimer* timeUpdate;

    BusinessCard* signOne;
    BusinessCard* signTwo;
    BusinessCard* signThree;
    SignCard* signNow;

    QThread* threadCamera;
    OpencvCamera* camera;
};

#endif // MAINWIDGET_H
