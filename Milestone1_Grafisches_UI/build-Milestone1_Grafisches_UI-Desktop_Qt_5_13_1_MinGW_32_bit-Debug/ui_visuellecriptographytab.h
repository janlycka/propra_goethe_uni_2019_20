/********************************************************************************
** Form generated from reading UI file 'visuellecriptographytab.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUELLECRIPTOGRAPHYTAB_H
#define UI_VISUELLECRIPTOGRAPHYTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_visuellecriptographytab
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *visuellecriptographytab)
    {
        if (visuellecriptographytab->objectName().isEmpty())
            visuellecriptographytab->setObjectName(QString::fromUtf8("visuellecriptographytab"));
        visuellecriptographytab->resize(1259, 614);
        verticalLayoutWidget = new QWidget(visuellecriptographytab);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(890, 320, 311, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(visuellecriptographytab);

        QMetaObject::connectSlotsByName(visuellecriptographytab);
    } // setupUi

    void retranslateUi(QDialog *visuellecriptographytab)
    {
        visuellecriptographytab->setWindowTitle(QCoreApplication::translate("visuellecriptographytab", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("visuellecriptographytab", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("visuellecriptographytab", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class visuellecriptographytab: public Ui_visuellecriptographytab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUELLECRIPTOGRAPHYTAB_H
