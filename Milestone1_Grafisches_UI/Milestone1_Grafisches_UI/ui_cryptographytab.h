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
#include <QtWidgets/QGridLayout>
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
    QPushButton *encodeButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    cryptowidget *Cryptowidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *createKeyButton;
    QPushButton *ImportButton;
    QLabel *label_5;
    QLabel *label_4;
    QPushButton *importbildbutton;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    cryptowidget *Cryptowidget_2;
    cryptowidget *Cryptowidget_3;

    void setupUi(QWidget *cryptographytab)
    {
        if (cryptographytab->objectName().isEmpty())
            cryptographytab->setObjectName(QString::fromUtf8("cryptographytab"));
        cryptographytab->resize(926, 791);
        verticalLayoutWidget = new QWidget(cryptographytab);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(610, 230, 141, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        encodeButton = new QPushButton(verticalLayoutWidget);
        encodeButton->setObjectName(QString::fromUtf8("encodeButton"));

        verticalLayout->addWidget(encodeButton);

        label = new QLabel(cryptographytab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 91, 16));
        label_2 = new QLabel(cryptographytab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(340, 10, 55, 16));
        label_3 = new QLabel(cryptographytab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 340, 101, 16));
        Cryptowidget = new cryptowidget(cryptographytab);
        Cryptowidget->setObjectName(QString::fromUtf8("Cryptowidget"));
        Cryptowidget->setGeometry(QRect(20, 40, 311, 291));
        gridLayoutWidget = new QWidget(cryptographytab);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(670, 10, 251, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        createKeyButton = new QPushButton(gridLayoutWidget);
        createKeyButton->setObjectName(QString::fromUtf8("createKeyButton"));

        gridLayout->addWidget(createKeyButton, 3, 0, 1, 1);

        ImportButton = new QPushButton(gridLayoutWidget);
        ImportButton->setObjectName(QString::fromUtf8("ImportButton"));

        gridLayout->addWidget(ImportButton, 2, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        importbildbutton = new QPushButton(gridLayoutWidget);
        importbildbutton->setObjectName(QString::fromUtf8("importbildbutton"));

        gridLayout->addWidget(importbildbutton, 1, 0, 1, 1);

        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 4, 1, 1, 1);

        Cryptowidget_2 = new cryptowidget(cryptographytab);
        Cryptowidget_2->setObjectName(QString::fromUtf8("Cryptowidget_2"));
        Cryptowidget_2->setGeometry(QRect(340, 40, 311, 291));
        Cryptowidget_3 = new cryptowidget(cryptographytab);
        Cryptowidget_3->setObjectName(QString::fromUtf8("Cryptowidget_3"));
        Cryptowidget_3->setGeometry(QRect(20, 360, 421, 291));

        retranslateUi(cryptographytab);

        QMetaObject::connectSlotsByName(cryptographytab);
    } // setupUi

    void retranslateUi(QWidget *cryptographytab)
    {
        cryptographytab->setWindowTitle(QCoreApplication::translate("cryptographytab", "Form", nullptr));
        encodeButton->setText(QCoreApplication::translate("cryptographytab", "Choose Task", nullptr));
        label->setText(QCoreApplication::translate("cryptographytab", "Original picture", nullptr));
        label_2->setText(QCoreApplication::translate("cryptographytab", "Key", nullptr));
        label_3->setText(QCoreApplication::translate("cryptographytab", "encrypted picture", nullptr));
        createKeyButton->setText(QCoreApplication::translate("cryptographytab", "Create Key", nullptr));
        ImportButton->setText(QCoreApplication::translate("cryptographytab", "Import Key", nullptr));
        label_5->setText(QCoreApplication::translate("cryptographytab", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("cryptographytab", "TextLabel", nullptr));
        importbildbutton->setText(QCoreApplication::translate("cryptographytab", "Import Bild", nullptr));
        pushButton->setText(QCoreApplication::translate("cryptographytab", "Export Bild", nullptr));
        label_6->setText(QCoreApplication::translate("cryptographytab", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("cryptographytab", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("cryptographytab", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cryptographytab: public Ui_cryptographytab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRYPTOGRAPHYTAB_H
