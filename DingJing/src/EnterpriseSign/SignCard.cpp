#include "SignCard.h"
#include "ui_SignCard.h"

SignCard::SignCard(const int width, const int height, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignCard),
    widthSize(width),
    heightSize(height)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);  //无边框
    this->setAttribute(Qt::WA_TranslucentBackground);  //透明背景

    InitWidgetLayout();
}

SignCard::~SignCard()
{
    delete ui;
}

void SignCard::paintEvent(QPaintEvent *event)
{
    //窗口画成圆角
    QWidget::paintEvent(event);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);  //反锯齿
    painter.setBrush(QBrush(QColor(250, 245, 245)));    //纯色绘画，可以换成图片
    painter.setPen(Qt::transparent);
    QRect rect = this->rect();
    rect.setWidth(rect.width()-1);
    rect.setHeight(rect.height()-1);
    painter.drawRoundedRect(rect, 40, 40);
    QWidget::paintEvent(event);
}

void SignCard::InitWidgetLayout()
{
    ui->portrait ->setPixmap(QPixmap(":Resources/timg.png"));
    ui->portrait ->setScaledContents(true);

    ui->portrait ->setGeometry(widthSize*5, heightSize*4, widthSize*20, heightSize*40);
    ui->name ->setGeometry(widthSize*8, heightSize*42, widthSize*13, heightSize*10);
    ui->position ->setGeometry(widthSize*9.5, heightSize*53, widthSize*10, heightSize*4);
    ui->state ->setGeometry(widthSize*6.5, heightSize*65, widthSize*16, heightSize*5);
    setEnterpriseMessage(1001001);
}

bool SignCard::setEnterpriseMessage(const int &ID)
{
    Q_UNUSED(ID);
//    ui->name->setText(QString::number(ID));
    ui->name->setText("张晓梅");
    ui->position->setText("人力资源总监");
    ui->state->setText("16:10 打卡成功");
}
