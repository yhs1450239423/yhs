/********************************************************************************
** Form generated from reading UI file 'ditu.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DITU_H
#define UI_DITU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ditu
{
public:
    QLabel *label;
    QLCDNumber *lcdNumber;
    QLabel *label_2;
    QLCDNumber *lcdNumber_2;
    QLabel *label_3;

    void setupUi(QWidget *ditu)
    {
        if (ditu->objectName().isEmpty())
            ditu->setObjectName(QStringLiteral("ditu"));
        ditu->resize(672, 328);
        label = new QLabel(ditu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 70, 54, 21));
        label->setStyleSheet(QStringLiteral("font: 75 16pt \"Adobe Arabic\";"));
        lcdNumber = new QLCDNumber(ditu);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(170, 79, 64, 23));
        lcdNumber->setStyleSheet(QLatin1String("font: 75 12pt \"Adobe Arabic\";\n"
"color: rgb(255, 85, 0);"));
        label_2 = new QLabel(ditu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 70, 54, 21));
        label_2->setStyleSheet(QStringLiteral("font: 75 16pt \"Adobe Arabic\";"));
        lcdNumber_2 = new QLCDNumber(ditu);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(310, 79, 64, 23));
        lcdNumber_2->setStyleSheet(QLatin1String("font: 75 12pt \"Adobe Arabic\";\n"
"color: rgb(255, 85, 0);"));
        label_3 = new QLabel(ditu);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(400, 70, 54, 21));
        label_3->setStyleSheet(QStringLiteral("font: 75 16pt \"Adobe Arabic\";"));

        retranslateUi(ditu);

        QMetaObject::connectSlotsByName(ditu);
    } // setupUi

    void retranslateUi(QWidget *ditu)
    {
        ditu->setWindowTitle(QApplication::translate("ditu", "Form", 0));
        label->setText(QApplication::translate("ditu", "\346\202\250\350\270\217\350\266\263\344\270\255\345\233\275", 0));
        label_2->setText(QApplication::translate("ditu", "\344\270\252\347\234\201\345\214\272\357\274\214", 0));
        label_3->setText(QApplication::translate("ditu", "\344\270\252\345\237\216\345\270\202", 0));
    } // retranslateUi

};

namespace Ui {
    class ditu: public Ui_ditu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DITU_H
