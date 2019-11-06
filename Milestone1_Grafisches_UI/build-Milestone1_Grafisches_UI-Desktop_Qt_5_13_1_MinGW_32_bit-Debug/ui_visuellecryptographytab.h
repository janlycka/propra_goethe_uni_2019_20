/********************************************************************************
** Form generated from reading UI file 'visuellecryptographytab.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUELLECRYPTOGRAPHYTAB_H
#define UI_VISUELLECRYPTOGRAPHYTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *ImportButton;
    QPushButton *ExportButton;
    QPushButton *KeyButton;
    QWidget *OrBildwidget;
    QWidget *Keywidget;
    QWidget *enbildWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1296, 651);
        ImportButton = new QPushButton(Dialog);
        ImportButton->setObjectName(QString::fromUtf8("ImportButton"));
        ImportButton->setGeometry(QRect(600, 480, 171, 28));
        ExportButton = new QPushButton(Dialog);
        ExportButton->setObjectName(QString::fromUtf8("ExportButton"));
        ExportButton->setGeometry(QRect(600, 530, 171, 28));
        KeyButton = new QPushButton(Dialog);
        KeyButton->setObjectName(QString::fromUtf8("KeyButton"));
        KeyButton->setGeometry(QRect(910, 460, 281, 28));
        OrBildwidget = new QWidget(Dialog);
        OrBildwidget->setObjectName(QString::fromUtf8("OrBildwidget"));
        OrBildwidget->setGeometry(QRect(70, 70, 401, 211));
        Keywidget = new QWidget(Dialog);
        Keywidget->setObjectName(QString::fromUtf8("Keywidget"));
        Keywidget->setGeometry(QRect(50, 340, 401, 211));
        enbildWidget = new QWidget(Dialog);
        enbildWidget->setObjectName(QString::fromUtf8("enbildWidget"));
        enbildWidget->setGeometry(QRect(650, 60, 581, 331));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(910, 500, 281, 28));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(910, 540, 281, 31));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 20, 141, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 290, 41, 41));
        label_2->setFont(font);
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(840, 20, 171, 31));
        label_3->setFont(font);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        ImportButton->setText(QCoreApplication::translate("Dialog", "Import", nullptr));
        ExportButton->setText(QCoreApplication::translate("Dialog", "Export", nullptr));
        KeyButton->setText(QCoreApplication::translate("Dialog", "Create Key", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "Encryption", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Decryption", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Original Picture", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Key", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Encrypted Picture", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUELLECRYPTOGRAPHYTAB_H
