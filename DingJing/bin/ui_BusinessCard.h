/********************************************************************************
** Form generated from reading UI file 'BusinessCard.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSINESSCARD_H
#define UI_BUSINESSCARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BusinessCard
{
public:
    QLabel *portrait;
    QLabel *name;
    QLabel *position;
    QLabel *state;

    void setupUi(QWidget *BusinessCard)
    {
        if (BusinessCard->objectName().isEmpty())
            BusinessCard->setObjectName(QStringLiteral("BusinessCard"));
        BusinessCard->resize(350, 70);
        BusinessCard->setStyleSheet(QStringLiteral(""));
        portrait = new QLabel(BusinessCard);
        portrait->setObjectName(QStringLiteral("portrait"));
        portrait->setGeometry(QRect(10, 10, 61, 51));
        portrait->setAlignment(Qt::AlignCenter);
        name = new QLabel(BusinessCard);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(80, 0, 101, 37));
        name->setStyleSheet(QStringLiteral("font: 175 20px  \"Monospace\";"));
        name->setAlignment(Qt::AlignCenter);
        position = new QLabel(BusinessCard);
        position->setObjectName(QStringLiteral("position"));
        position->setGeometry(QRect(160, 10, 81, 25));
        position->setStyleSheet(QStringLiteral("font: 110 13px  \"Monospace\";"));
        position->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        state = new QLabel(BusinessCard);
        state->setObjectName(QStringLiteral("state"));
        state->setGeometry(QRect(90, 40, 191, 23));
        state->setStyleSheet(QStringLiteral("font: 10px  \"Monospace\";"));
        state->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(BusinessCard);

        QMetaObject::connectSlotsByName(BusinessCard);
    } // setupUi

    void retranslateUi(QWidget *BusinessCard)
    {
        BusinessCard->setWindowTitle(QApplication::translate("BusinessCard", "Form", nullptr));
        portrait->setText(QApplication::translate("BusinessCard", "\345\244\264\345\203\217", nullptr));
        name->setText(QApplication::translate("BusinessCard", "\345\220\215\345\255\227", nullptr));
        position->setText(QApplication::translate("BusinessCard", "\350\201\214\344\275\215", nullptr));
        state->setText(QApplication::translate("BusinessCard", "\346\211\223\345\215\241\344\277\241\346\201\257\357\274\232\346\227\266\351\227\264 + \346\211\223\345\215\241\347\212\266\346\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BusinessCard: public Ui_BusinessCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSINESSCARD_H
