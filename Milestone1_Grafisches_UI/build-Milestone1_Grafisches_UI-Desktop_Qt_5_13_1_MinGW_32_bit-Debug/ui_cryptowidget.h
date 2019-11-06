/********************************************************************************
** Form generated from reading UI file 'cryptowidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRYPTOWIDGET_H
#define UI_CRYPTOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cryptowidget
{
public:

    void setupUi(QWidget *cryptowidget)
    {
        if (cryptowidget->objectName().isEmpty())
            cryptowidget->setObjectName(QString::fromUtf8("cryptowidget"));
        cryptowidget->resize(400, 300);

        retranslateUi(cryptowidget);

        QMetaObject::connectSlotsByName(cryptowidget);
    } // setupUi

    void retranslateUi(QWidget *cryptowidget)
    {
        cryptowidget->setWindowTitle(QCoreApplication::translate("cryptowidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cryptowidget: public Ui_cryptowidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRYPTOWIDGET_H
