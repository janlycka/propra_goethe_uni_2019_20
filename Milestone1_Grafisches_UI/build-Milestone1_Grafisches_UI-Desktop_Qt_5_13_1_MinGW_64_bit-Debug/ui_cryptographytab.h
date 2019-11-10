/********************************************************************************
** Form generated from reading UI file 'cryptographytab.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRYPTOGRAPHYTAB_H
#define UI_CRYPTOGRAPHYTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cryptowidget.h"

QT_BEGIN_NAMESPACE

class Ui_cryptographytab
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QPushButton *importbildbutton;
    QPushButton *ImportButton;
    QPushButton *encodeButton;
    QPushButton *createKeyButton;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    cryptowidget *Cryptowidget;

    void setupUi(QWidget *cryptographytab)
    {
        if (cryptographytab->objectName().isEmpty())
            cryptographytab->setObjectName(QString::fromUtf8("cryptographytab"));
        cryptographytab->resize(767, 409);
        verticalLayoutWidget = new QWidget(cryptographytab);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(600, 20, 141, 361));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout->addWidget(comboBox);

        importbildbutton = new QPushButton(verticalLayoutWidget);
        importbildbutton->setObjectName(QString::fromUtf8("importbildbutton"));

        verticalLayout->addWidget(importbildbutton);

        ImportButton = new QPushButton(verticalLayoutWidget);
        ImportButton->setObjectName(QString::fromUtf8("ImportButton"));

        verticalLayout->addWidget(ImportButton);

        encodeButton = new QPushButton(verticalLayoutWidget);
        encodeButton->setObjectName(QString::fromUtf8("encodeButton"));

        verticalLayout->addWidget(encodeButton);

        createKeyButton = new QPushButton(verticalLayoutWidget);
        createKeyButton->setObjectName(QString::fromUtf8("createKeyButton"));

        verticalLayout->addWidget(createKeyButton);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        label = new QLabel(cryptographytab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 20, 91, 16));
        label_2 = new QLabel(cryptographytab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 200, 55, 16));
        label_3 = new QLabel(cryptographytab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 30, 101, 16));
        label_4 = new QLabel(cryptographytab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(420, 330, 55, 16));
        Cryptowidget = new cryptowidget(cryptographytab);
        Cryptowidget->setObjectName(QString::fromUtf8("Cryptowidget"));
        Cryptowidget->setGeometry(QRect(60, 70, 211, 121));

        retranslateUi(cryptographytab);

        QMetaObject::connectSlotsByName(cryptographytab);
    } // setupUi

    void retranslateUi(QWidget *cryptographytab)
    {
        cryptographytab->setWindowTitle(QCoreApplication::translate("cryptographytab", "Form", nullptr));
        importbildbutton->setText(QCoreApplication::translate("cryptographytab", "Import Bild", nullptr));
        ImportButton->setText(QCoreApplication::translate("cryptographytab", "Import Key", nullptr));
        encodeButton->setText(QCoreApplication::translate("cryptographytab", "Choose Task", nullptr));
        createKeyButton->setText(QCoreApplication::translate("cryptographytab", "Create Key", nullptr));
        pushButton->setText(QCoreApplication::translate("cryptographytab", "Export Bild", nullptr));
        label->setText(QCoreApplication::translate("cryptographytab", "Original picture", nullptr));
        label_2->setText(QCoreApplication::translate("cryptographytab", "Key", nullptr));
        label_3->setText(QCoreApplication::translate("cryptographytab", "encrypted picture", nullptr));
        label_4->setText(QCoreApplication::translate("cryptographytab", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cryptographytab: public Ui_cryptographytab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRYPTOGRAPHYTAB_H
