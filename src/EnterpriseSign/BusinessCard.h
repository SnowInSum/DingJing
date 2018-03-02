#ifndef BUSINESSCARD_H
#define BUSINESSCARD_H

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>

namespace Ui {
class BusinessCard;
}

class BusinessCard : public QWidget
{
    Q_OBJECT

public:
    explicit BusinessCard(const int width, const int height, QWidget *parent = 0);
    ~BusinessCard();

    bool setEnterpriseMessage(const int &ID);

protected:
    virtual void paintEvent(QPaintEvent *event);
    void InitWidgetLayout();

private:
    Ui::BusinessCard *ui;

    int widthSize;
    int heightSize;

};

#endif // BUSINESSCARD_H
