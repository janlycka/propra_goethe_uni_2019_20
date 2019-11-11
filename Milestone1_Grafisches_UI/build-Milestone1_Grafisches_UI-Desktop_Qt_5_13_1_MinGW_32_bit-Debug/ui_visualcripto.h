/********************************************************************************
** Form generated from reading UI file 'visualcripto.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALCRIPTO_H
#define UI_VISUALCRIPTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_visualcripto
{
public:

    void setupUi(QWidget *visualcripto)
    {
        if (visualcripto->objectName().isEmpty())
            visualcripto->setObjectName(QString::fromUtf8("visualcripto"));
        visualcripto->resize(400, 300);

        retranslateUi(visualcripto);

        QMetaObject::connectSlotsByName(visualcripto);
    } // setupUi

    void retranslateUi(QWidget *visualcripto)
    {
        visualcripto->setWindowTitle(QCoreApplication::translate("visualcripto", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class visualcripto: public Ui_visualcripto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALCRIPTO_H
