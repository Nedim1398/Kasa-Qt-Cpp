/********************************************************************************
** Form generated from reading UI file 'racun.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RACUN_H
#define UI_RACUN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_racun
{
public:

    void setupUi(QWidget *racun)
    {
        if (racun->objectName().isEmpty())
            racun->setObjectName(QStringLiteral("racun"));
        racun->resize(400, 300);

        retranslateUi(racun);

        QMetaObject::connectSlotsByName(racun);
    } // setupUi

    void retranslateUi(QWidget *racun)
    {
        racun->setWindowTitle(QApplication::translate("racun", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class racun: public Ui_racun {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RACUN_H
