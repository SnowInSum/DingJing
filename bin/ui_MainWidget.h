/********************************************************************************
** Form generated from reading UI file 'MainWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QLabel *logo;
    QLabel *time;
    QLabel *data;
    QLabel *week;
    QLabel *weather;
    QPushButton *admin_login;
    QLabel *oneState;
    QLabel *twoState;
    QLabel *threeState;
    QLabel *signState;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QStringLiteral("MainWidget"));
        MainWidget->resize(1024, 576);
        logo = new QLabel(MainWidget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(20, 20, 221, 71));
        logo->setStyleSheet(QLatin1String("font: 490 35px \"Bahnschrift\";\n"
"color: rgb(239, 41, 41);\n"
""));
        logo->setAlignment(Qt::AlignCenter);
        time = new QLabel(MainWidget);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(730, 0, 261, 111));
        time->setStyleSheet(QLatin1String("font: 95px \"Bahnschrift\";\n"
"color: rgb(239, 41, 41);"));
        time->setAlignment(Qt::AlignCenter);
        data = new QLabel(MainWidget);
        data->setObjectName(QStringLiteral("data"));
        data->setGeometry(QRect(740, 120, 171, 41));
        data->setStyleSheet(QLatin1String("font: 500 28px \"Bahnschrift\";\n"
"color: rgb(239, 41, 41);"));
        data->setAlignment(Qt::AlignCenter);
        week = new QLabel(MainWidget);
        week->setObjectName(QStringLiteral("week"));
        week->setGeometry(QRect(910, 120, 81, 41));
        week->setStyleSheet(QLatin1String("font:  450 30px \"Bahnschrift\";\n"
"color: rgb(239, 41, 41);"));
        week->setAlignment(Qt::AlignCenter);
        weather = new QLabel(MainWidget);
        weather->setObjectName(QStringLiteral("weather"));
        weather->setGeometry(QRect(860, 170, 121, 41));
        weather->setStyleSheet(QLatin1String("font:  450 28px \"Bahnschrift\";\n"
"color: rgb(239, 41, 41);"));
        weather->setAlignment(Qt::AlignCenter);
        admin_login = new QPushButton(MainWidget);
        admin_login->setObjectName(QStringLiteral("admin_login"));
        admin_login->setGeometry(QRect(870, 480, 101, 51));
        oneState = new QLabel(MainWidget);
        oneState->setObjectName(QStringLiteral("oneState"));
        oneState->setGeometry(QRect(270, 330, 71, 51));
        oneState->setStyleSheet(QLatin1String("font: 490 30px \"Bahnschrift\";\n"
"color: rgb(239, 41, 41);"));
        twoState = new QLabel(MainWidget);
        twoState->setObjectName(QStringLiteral("twoState"));
        twoState->setGeometry(QRect(270, 380, 71, 51));
        twoState->setStyleSheet(QLatin1String("font: 490 30px \"Bahnschrift\";\n"
"color: rgb(239, 41, 41);"));
        threeState = new QLabel(MainWidget);
        threeState->setObjectName(QStringLiteral("threeState"));
        threeState->setGeometry(QRect(270, 430, 61, 51));
        threeState->setStyleSheet(QLatin1String("font: 490 20px \"Bahnschrift\";\n"
"color: rgb(239, 41, 41);"));
        signState = new QLabel(MainWidget);
        signState->setObjectName(QStringLiteral("signState"));
        signState->setGeometry(QRect(460, 300, 71, 51));
        signState->setStyleSheet(QLatin1String("font: 490 30px \"Bahnschrift\";\n"
"color: rgb(239, 41, 41);"));

        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QApplication::translate("MainWidget", "MainWidget", nullptr));
        logo->setText(QApplication::translate("MainWidget", "\351\274\216\350\217\201\347\247\221\346\212\200", nullptr));
        time->setText(QApplication::translate("MainWidget", "11:02", nullptr));
        data->setText(QApplication::translate("MainWidget", "2018/02/26", nullptr));
        week->setText(QApplication::translate("MainWidget", "\345\221\250\344\270\200", nullptr));
        weather->setText(QApplication::translate("MainWidget", "\346\231\264 28\342\204\203", nullptr));
        admin_login->setText(QApplication::translate("MainWidget", "set", nullptr));
        oneState->setText(QApplication::translate("MainWidget", "one", nullptr));
        twoState->setText(QApplication::translate("MainWidget", "two", nullptr));
        threeState->setText(QApplication::translate("MainWidget", "three", nullptr));
        signState->setText(QApplication::translate("MainWidget", "sign", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
