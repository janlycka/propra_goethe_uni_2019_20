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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cryptographytab
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *encodeButton;
    QPushButton *createKeyButton;
    QPushButton *decodeButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

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
        encodeButton = new QPushButton(verticalLayoutWidget);
        encodeButton->setObjectName(QString::fromUtf8("encodeButton"));

        verticalLayout->addWidget(encodeButton);

        createKeyButton = new QPushButton(verticalLayoutWidget);
        createKeyButton->setObjectName(QString::fromUtf8("createKeyButton"));

        verticalLayout->addWidget(createKeyButton);

        decodeButton = new QPushButton(verticalLayoutWidget);
        decodeButton->setObjectName(QString::fromUtf8("decodeButton"));

        verticalLayout->addWidget(decodeButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

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

        retranslateUi(cryptographytab);

        QMetaObject::connectSlotsByName(cryptographytab);
    } // setupUi

    void retranslateUi(QWidget *cryptographytab)
    {
        cryptographytab->setWindowTitle(QCoreApplication::translate("cryptographytab", "Form", nullptr));
        encodeButton->setText(QCoreApplication::translate("cryptographytab", "Encode", nullptr));
        createKeyButton->setText(QCoreApplication::translate("cryptographytab", "Create Key", nullptr));
        decodeButton->setText(QCoreApplication::translate("cryptographytab", "Decode", nullptr));
        pushButton_2->setText(QCoreApplication::translate("cryptographytab", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("cryptographytab", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("cryptographytab", "Original picture", nullptr));
        label_2->setText(QCoreApplication::translate("cryptographytab", "Key", nullptr));
        label_3->setText(QCoreApplication::translate("cryptographytab", "encrypted picture", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cryptographytab: public Ui_cryptographytab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRYPTOGRAPHYTAB_H
