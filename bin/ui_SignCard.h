/********************************************************************************
** Form generated from reading UI file 'SignCard.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNCARD_H
#define UI_SIGNCARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignCard
{
public:
    QLabel *position;
    QLabel *name;
    QLabel *state;
    QLabel *portrait;

    void setupUi(QWidget *SignCard)
    {
        if (SignCard->objectName().isEmpty())
            SignCard->setObjectName(QStringLiteral("SignCard"));
        SignCard->resize(403, 532);
        position = new QLabel(SignCard);
        position->setObjectName(QStringLiteral("position"));
        position->setGeometry(QRect(140, 300, 121, 41));
        position->setStyleSheet(QStringLiteral("font: 110 15px  \"Monospace\";"));
        position->setAlignment(Qt::AlignCenter);
        name = new QLabel(SignCard);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(120, 230, 141, 51));
        name->setStyleSheet(QStringLiteral("font: 175 40px  \"Monospace\";"));
        name->setAlignment(Qt::AlignCenter);
        state = new QLabel(SignCard);
        state->setObjectName(QStringLiteral("state"));
        state->setGeometry(QRect(110, 380, 191, 61));
        state->setStyleSheet(QLatin1String("font:  23px \"Noto Sans CJK SC\";\n"
"font-weight: lighter;"));
        state->setAlignment(Qt::AlignCenter);
        portrait = new QLabel(SignCard);
        portrait->setObjectName(QStringLiteral("portrait"));
        portrait->setGeometry(QRect(140, 30, 111, 111));
        portrait->setAlignment(Qt::AlignCenter);

        retranslateUi(SignCard);

        QMetaObject::connectSlotsByName(SignCard);
    } // setupUi

    void retranslateUi(QWidget *SignCard)
    {
        SignCard->setWindowTitle(QApplication::translate("SignCard", "Form", nullptr));
        position->setText(QApplication::translate("SignCard", "\350\201\214\344\275\215", nullptr));
        name->setText(QApplication::translate("SignCard", "\345\220\215\345\255\227", nullptr));
        state->setText(QApplication::translate("SignCard", "\346\227\266\351\227\264 + \346\211\223\345\215\241\347\212\266\346\200\201", nullptr));
        portrait->setText(QApplication::translate("SignCard", "\345\244\264\345\203\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignCard: public Ui_SignCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNCARD_H
