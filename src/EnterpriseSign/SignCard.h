#ifndef SIGNCARD_H
#define SIGNCARD_H

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>

namespace Ui {
class SignCard;
}

class SignCard : public QWidget
{
    Q_OBJECT

public:
    explicit SignCard(const int width, const int height, QWidget *parent = 0);
    ~SignCard();

    bool setEnterpriseMessage(const int &ID);

protected:
    virtual void paintEvent(QPaintEvent *event);
    void InitWidgetLayout();

private:
    Ui::SignCard *ui;

    int widthSize;
    int heightSize;
};

#endif // SIGNCARD_H
