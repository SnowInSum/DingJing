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

    this->setAutoFillBackground(true); // 这句要加上, 否则可能显示不出背景图.
    QPalette palette = this->palette();
    palette.setBrush(QPalette::Window,
            QBrush(pixmap.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation)));
    this->setPalette(palette);

    InitWidgetLayout();
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::InitWidgetLayout()
{
    ui->logo->setGeometry(widthSize*3.1, heightSize*3.8, widthSize*13.3, heightSize*8.3);
    ui->time->setGeometry(widthSize*74.6, heightSize*0.6, widthSize*26, heightSize*20.7);
    ui->data->setGeometry(widthSize*76, heightSize*23, widthSize*15, heightSize*6.5);
    ui->week->setGeometry(widthSize*93, heightSize*23, widthSize*6, heightSize*6.5);
    ui->weather->setGeometry(widthSize*89, heightSize*31.5, widthSize*11, heightSize*6.5);
    ui->admin_login->setGeometry(widthSize*92.5, heightSize*96, widthSize*6.8, heightSize*13);

    one = new BusinessCard(widthSize, heightSize, this);
    one->setGeometry(widthSize*3.1, heightSize*66, widthSize*26, heightSize*13);
    one->show();
    ui->oneState->setPixmap(QPixmap(":Resources/Circular.png"));
    ui->oneState->setGeometry(widthSize*26, heightSize*66.8, widthSize*6, heightSize*12);
    ui->oneState->setScaledContents(true);
    ui->oneState->raise();

    two = new BusinessCard(widthSize, heightSize, this);
    two->setGeometry(widthSize*3.1, heightSize*81, widthSize*26, heightSize*13);
    two->show();
    ui->twoState->setPixmap(QPixmap(":Resources/Circular.png"));
    ui->twoState->setGeometry(widthSize*26, heightSize*81.8, widthSize*6, heightSize*12);
    ui->twoState->setScaledContents(true);
    ui->twoState->raise();

    three = new BusinessCard(widthSize, heightSize, this);
    three->setGeometry(widthSize*3.1, heightSize*96, widthSize*26, heightSize*13);
    three->show();
    ui->threeState->setPixmap(QPixmap(":Resources/Circular.png"));
    ui->threeState->setGeometry(widthSize*26, heightSize*96.8, widthSize*6, heightSize*12);
    ui->threeState->setScaledContents(true);
    ui->threeState->raise();

    signPerson = new SignCard(widthSize, heightSize, this);
    signPerson->setGeometry(widthSize*36.5, heightSize*13.5, widthSize*29, heightSize*84);
    signPerson->show();
    ui->signState ->setPixmap(QPixmap(":Resources/Circular.png"));
    ui->signState ->setGeometry(widthSize*46, heightSize*86.8, widthSize*11, heightSize*22);
    ui->signState ->setScaledContents(true);
    ui->signState ->raise();
}

void MainWidget::on_admin_login_clicked()
{

}
