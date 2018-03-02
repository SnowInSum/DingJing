#include "BusinessCard.h"
#include "ui_BusinessCard.h"

BusinessCard::BusinessCard(const int width, const int height, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BusinessCard),
    widthSize(width),
    heightSize(height)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);  //无边框
    this->setAttribute(Qt::WA_TranslucentBackground);  //透明背景

    InitWidgetLayout();
}

BusinessCard::~BusinessCard()
{
    delete ui;
}

void BusinessCard::paintEvent(QPaintEvent *event)
{
    //窗口画成圆角
    QWidget::paintEvent(event);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);  //反锯齿
  //  painter.setBrush(QBrush(Qt::cyan));    //纯色绘画，可以换成图片
    painter.setPen(Qt::transparent);
    QRect rect = this->rect();
    rect.setWidth(rect.width()-1);
    rect.setHeight(rect.height()-1);
    painter.drawRoundedRect(rect, 20, 20);
    QWidget::paintEvent(event);
}

void BusinessCard::InitWidgetLayout()
{
    ui->portrait ->setPixmap(QPixmap(":Resources/timg.png"));
    ui->portrait ->setScaledContents(true);
    ui->portrait ->setGeometry(widthSize*0.2, heightSize*0.2, widthSize*6.5, heightSize*13);
    ui->name ->setGeometry(widthSize*7, heightSize*2.5, widthSize*6, heightSize*4.6);
    ui->position ->setGeometry(widthSize*13.5, heightSize*3.5, widthSize*10, heightSize*3.5);
    ui->state ->setGeometry(widthSize*7, heightSize*7.5, widthSize*12, heightSize*2.5);
   setEnterpriseMessage(1001001);
}

bool BusinessCard::setEnterpriseMessage(const int &ID)
{
    Q_UNUSED(ID);
//    ui->name->setText(QString::number(ID));
    ui->name->setText("张晓梅");
    ui->position->setText("人力资源总监");
    ui->state->setText("早上好，16:10 签到成功");
}
