#include "MainWidget.h"
#include "ui_MainWidget.h"
#include <QDebug>

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    QPixmap pixmap(":/Resources/preview/page_1_normal.png");
    qDebug() << "pixmap size: " << pixmap.size();
    widthSize = pixmap.width() / 100;
    heightSize = pixmap.height() / 100;
    qDebug() << "width:" << widthSize << "  height:" << heightSize ;
    //窗口布局
    InitWidgetLayout();
    //开启时间更新
    timeStart();
    //开启摄像头
    cameraStart();
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::closeEvent(QCloseEvent* event)
{
    if(threadCamera->isRunning()) {
        threadCamera->quit();
        threadCamera->wait();
        event->accept();
    }
}

void MainWidget::InitWidgetLayout()
{
    //窗口控件布局
    ui->LBcamera ->setGeometry(0, 0, this->width(), this->height());
    ui->LBcamera ->lower();
    ui->LBlogo ->setGeometry(widthSize*3.1, heightSize*3.8, widthSize*13.3, heightSize*8.3);
    ui->LBtime ->setGeometry(widthSize*74.6, heightSize*0.6, widthSize*26, heightSize*20.7);
    ui->LBdate ->setGeometry(widthSize*76, heightSize*23, widthSize*15, heightSize*6.5);
    ui->LBweek ->setGeometry(widthSize*93, heightSize*23, widthSize*6, heightSize*6.5);
    ui->LBweather ->setGeometry(widthSize*89, heightSize*31.5, widthSize*11, heightSize*6.5);
    ui->BTadmin_login ->setGeometry(widthSize*92.5, heightSize*96, widthSize*6.8, heightSize*13);
    //IniSignCardLayout();
}

void MainWidget::IniSignCardLayout()
{
    //打卡人信息的窗口布局
    signOne = new BusinessCard(widthSize, heightSize, this);
    signOne->setGeometry(widthSize*3.1, heightSize*66, widthSize*26, heightSize*13);
    signOne->show();
    ui->signOneState->setPixmap(QPixmap(":Resources/Circular.png"));
    ui->signOneState->setGeometry(widthSize*26, heightSize*66.8, widthSize*6, heightSize*12);
    ui->signOneState->setScaledContents(true);
    ui->signOneState->raise();

    signTwo = new BusinessCard(widthSize, heightSize, this);
    signTwo->setGeometry(widthSize*3.1, heightSize*81, widthSize*26, heightSize*13);
    signTwo->show();
    ui->signTwoState->setPixmap(QPixmap(":Resources/Circular.png"));
    ui->signTwoState->setGeometry(widthSize*26, heightSize*81.8, widthSize*6, heightSize*12);
    ui->signTwoState->setScaledContents(true);
    ui->signTwoState->raise();

    signThree = new BusinessCard(widthSize, heightSize, this);
    signThree->setGeometry(widthSize*3.1, heightSize*96, widthSize*26, heightSize*13);
    signThree->show();
    ui->signThreeState->setPixmap(QPixmap(":Resources/Circular.png"));
    ui->signThreeState->setGeometry(widthSize*26, heightSize*96.8, widthSize*6, heightSize*12);
    ui->signThreeState->setScaledContents(true);
    ui->signThreeState->raise();

    signNow = new SignCard(widthSize, heightSize, this);
    signNow->setGeometry(widthSize*36.5, heightSize*13.5, widthSize*29, heightSize*84);
    signNow->show();
    ui->signNowState ->setPixmap(QPixmap(":Resources/Circular.png"));
    ui->signNowState ->setGeometry(widthSize*46, heightSize*86.8, widthSize*11, heightSize*22);
    ui->signNowState ->setScaledContents(true);
    ui->signNowState ->raise();
}

void MainWidget::timeStart()
{
    timeUpdate = new QTimer(this);
    connect(timeUpdate, SIGNAL(timeout()), this, SLOT(on_time_update()));
    timeUpdate->start(6000);
}

void MainWidget::on_time_update()
{
    QDateTime timeNow = QDateTime::currentDateTime();
    ui->LBtime ->setText(timeNow.toString("hh:mm"));
    ui->LBdate ->setText(timeNow.toString("yyyy/MM/dd"));
    QString week = timeNow.toString("ddd");
    if(week == "Mon")  {
        ui->LBweek ->setText("周一");
    }
    else if(week == "Tue")  {
        ui->LBweek ->setText("周二");
    }
    else if(week == "Wed")  {
        ui->LBweek ->setText("周三");
    }
    else if(week == "Thu")  {
        ui->LBweek ->setText("周四");
    }
    else if(week == "Fri")  {
        ui->LBweek ->setText("周五");
    }
    else if(week == "Sat")  {
        ui->LBweek ->setText("周六");
    }
    else if(week == "Sun")  {
        ui->LBweek ->setText("周日");
    }
    else  {
        ui->LBweek ->setText(week);
    }

}

void MainWidget::cameraStart()
{
    camera = new OpencvCamera;
    camera->setCameraPixel(this->width(), this->height());
    connect(camera, SIGNAL(sigCameraImage(QImage)), SLOT(on_background_update(QImage)));
    threadCamera = new QThread(this);
    camera->moveToThread(threadCamera);
    threadCamera->start();
    camera->startCamera();
}

void MainWidget::on_background_update(QImage image)
{
    ui->LBcamera ->setPixmap(QPixmap::fromImage(image));
}

void MainWidget::on_admin_login_clicked()
{

}
