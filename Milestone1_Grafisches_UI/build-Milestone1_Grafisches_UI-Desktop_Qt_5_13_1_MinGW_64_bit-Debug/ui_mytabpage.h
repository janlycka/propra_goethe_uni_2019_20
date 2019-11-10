/********************************************************************************
** Form generated from reading UI file 'mytabpage.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTABPAGE_H
#define UI_MYTABPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_MyTabPage
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MyTabPage)
    {
        if (MyTabPage->objectName().isEmpty())
            MyTabPage->setObjectName(QString::fromUtf8("MyTabPage"));
        MyTabPage->resize(400, 300);
        buttonBox = new QDialogButtonBox(MyTabPage);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(MyTabPage);
        QObject::connect(buttonBox, SIGNAL(accepted()), MyTabPage, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MyTabPage, SLOT(reject()));

        QMetaObject::connectSlotsByName(MyTabPage);
    } // setupUi

    void retranslateUi(QDialog *MyTabPage)
    {
        MyTabPage->setWindowTitle(QCoreApplication::translate("MyTabPage", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyTabPage: public Ui_MyTabPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTABPAGE_H
