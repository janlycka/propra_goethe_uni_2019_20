/********************************************************************************
** Form generated from reading UI file 'gameoflifetab.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOFLIFETAB_H
#define UI_GAMEOFLIFETAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "golwidget.h"

QT_BEGIN_NAMESPACE

class Ui_gameOfLifeTab
{
public:
    QHBoxLayout *horizontalLayout_2;
    GolWidget *golWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *controlLayout;
    QHBoxLayout *plaeWidthLayout;
    QLabel *label;
    QSpinBox *planeWidthSpinBox;
    QHBoxLayout *planeHeightLayout;
    QLabel *label_2;
    QSpinBox *planeHeightSpinBox;
    QHBoxLayout *intervallLayout;
    QLabel *label_3;
    QSpinBox *intervalSpinBox;
    QHBoxLayout *startStopLayout;
    QPushButton *startButton;
    QPushButton *evolveButton;
    QPushButton *clearButton;
    QPushButton *randomizeButton;
    QHBoxLayout *importExportLeyout;
    QPushButton *importButton;
    QPushButton *exportButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *gameOfLifeTab)
    {
        if (gameOfLifeTab->objectName().isEmpty())
            gameOfLifeTab->setObjectName(QString::fromUtf8("gameOfLifeTab"));
        gameOfLifeTab->resize(608, 503);
        horizontalLayout_2 = new QHBoxLayout(gameOfLifeTab);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        golWidget = new GolWidget(gameOfLifeTab);
        golWidget->setObjectName(QString::fromUtf8("golWidget"));
        verticalLayout_2 = new QVBoxLayout(golWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        horizontalLayout_2->addWidget(golWidget);

        controlLayout = new QVBoxLayout();
        controlLayout->setObjectName(QString::fromUtf8("controlLayout"));
        plaeWidthLayout = new QHBoxLayout();
        plaeWidthLayout->setObjectName(QString::fromUtf8("plaeWidthLayout"));
        label = new QLabel(gameOfLifeTab);
        label->setObjectName(QString::fromUtf8("label"));

        plaeWidthLayout->addWidget(label);

        planeWidthSpinBox = new QSpinBox(gameOfLifeTab);
        planeWidthSpinBox->setObjectName(QString::fromUtf8("planeWidthSpinBox"));
        planeWidthSpinBox->setValue(30);

        plaeWidthLayout->addWidget(planeWidthSpinBox);


        controlLayout->addLayout(plaeWidthLayout);

        planeHeightLayout = new QHBoxLayout();
        planeHeightLayout->setObjectName(QString::fromUtf8("planeHeightLayout"));
        label_2 = new QLabel(gameOfLifeTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        planeHeightLayout->addWidget(label_2);

        planeHeightSpinBox = new QSpinBox(gameOfLifeTab);
        planeHeightSpinBox->setObjectName(QString::fromUtf8("planeHeightSpinBox"));
        planeHeightSpinBox->setSingleStep(1);
        planeHeightSpinBox->setValue(30);

        planeHeightLayout->addWidget(planeHeightSpinBox);


        controlLayout->addLayout(planeHeightLayout);

        intervallLayout = new QHBoxLayout();
        intervallLayout->setObjectName(QString::fromUtf8("intervallLayout"));
        label_3 = new QLabel(gameOfLifeTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        intervallLayout->addWidget(label_3);

        intervalSpinBox = new QSpinBox(gameOfLifeTab);
        intervalSpinBox->setObjectName(QString::fromUtf8("intervalSpinBox"));
        intervalSpinBox->setMinimum(10);
        intervalSpinBox->setMaximum(1000000);
        intervalSpinBox->setValue(100);

        intervallLayout->addWidget(intervalSpinBox);


        controlLayout->addLayout(intervallLayout);

        startStopLayout = new QHBoxLayout();
        startStopLayout->setObjectName(QString::fromUtf8("startStopLayout"));
        startButton = new QPushButton(gameOfLifeTab);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        startStopLayout->addWidget(startButton);

        evolveButton = new QPushButton(gameOfLifeTab);
        evolveButton->setObjectName(QString::fromUtf8("evolveButton"));

        startStopLayout->addWidget(evolveButton);


        controlLayout->addLayout(startStopLayout);

        clearButton = new QPushButton(gameOfLifeTab);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        controlLayout->addWidget(clearButton);

        randomizeButton = new QPushButton(gameOfLifeTab);
        randomizeButton->setObjectName(QString::fromUtf8("randomizeButton"));

        controlLayout->addWidget(randomizeButton);

        importExportLeyout = new QHBoxLayout();
        importExportLeyout->setObjectName(QString::fromUtf8("importExportLeyout"));
        importButton = new QPushButton(gameOfLifeTab);
        importButton->setObjectName(QString::fromUtf8("importButton"));

        importExportLeyout->addWidget(importButton);

        exportButton = new QPushButton(gameOfLifeTab);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));

        importExportLeyout->addWidget(exportButton);


        controlLayout->addLayout(importExportLeyout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        controlLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(controlLayout);


        retranslateUi(gameOfLifeTab);

        QMetaObject::connectSlotsByName(gameOfLifeTab);
    } // setupUi

    void retranslateUi(QWidget *gameOfLifeTab)
    {
        gameOfLifeTab->setWindowTitle(QCoreApplication::translate("gameOfLifeTab", "Form", nullptr));
        label->setText(QCoreApplication::translate("gameOfLifeTab", "Plane width", nullptr));
        planeWidthSpinBox->setSuffix(QCoreApplication::translate("gameOfLifeTab", " cells", nullptr));
        label_2->setText(QCoreApplication::translate("gameOfLifeTab", "Plane height", nullptr));
        planeHeightSpinBox->setSuffix(QCoreApplication::translate("gameOfLifeTab", " cells", nullptr));
        label_3->setText(QCoreApplication::translate("gameOfLifeTab", "Generation intervall", nullptr));
        intervalSpinBox->setSuffix(QCoreApplication::translate("gameOfLifeTab", " ms", nullptr));
        startButton->setText(QCoreApplication::translate("gameOfLifeTab", "Start", nullptr));
        evolveButton->setText(QCoreApplication::translate("gameOfLifeTab", "Next Generation", nullptr));
        clearButton->setText(QCoreApplication::translate("gameOfLifeTab", "Clear", nullptr));
        randomizeButton->setText(QCoreApplication::translate("gameOfLifeTab", "Randomize", nullptr));
        importButton->setText(QCoreApplication::translate("gameOfLifeTab", "import", nullptr));
        exportButton->setText(QCoreApplication::translate("gameOfLifeTab", "export", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gameOfLifeTab: public Ui_gameOfLifeTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOFLIFETAB_H
