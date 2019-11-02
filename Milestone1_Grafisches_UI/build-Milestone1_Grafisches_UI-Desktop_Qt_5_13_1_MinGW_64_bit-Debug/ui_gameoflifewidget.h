/********************************************************************************
** Form generated from reading UI file 'gameoflifewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOFLIFEWIDGET_H
#define UI_GAMEOFLIFEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gameoflifewidget.h"

QT_BEGIN_NAMESPACE

class Ui_gameOfLifeWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    gameOfLifeWidget *golWidget;
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
    QPushButton *pushButton;
    QPushButton *stopButton;
    QPushButton *clearButton;
    QHBoxLayout *importExportLeyout;
    QPushButton *importButton;
    QPushButton *exportButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *gameOfLifeWidget)
    {
        if (gameOfLifeWidget->objectName().isEmpty())
            gameOfLifeWidget->setObjectName(QString::fromUtf8("gameOfLifeWidget"));
        gameOfLifeWidget->resize(608, 503);
        horizontalLayout_2 = new QHBoxLayout(gameOfLifeWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        golWidget = new gameOfLifeWidget(gameOfLifeWidget);
        golWidget->setObjectName(QString::fromUtf8("golWidget"));
        verticalLayout_2 = new QVBoxLayout(golWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        horizontalLayout_2->addWidget(golWidget);

        controlLayout = new QVBoxLayout();
        controlLayout->setObjectName(QString::fromUtf8("controlLayout"));
        plaeWidthLayout = new QHBoxLayout();
        plaeWidthLayout->setObjectName(QString::fromUtf8("plaeWidthLayout"));
        label = new QLabel(gameOfLifeWidget);
        label->setObjectName(QString::fromUtf8("label"));

        plaeWidthLayout->addWidget(label);

        planeWidthSpinBox = new QSpinBox(gameOfLifeWidget);
        planeWidthSpinBox->setObjectName(QString::fromUtf8("planeWidthSpinBox"));

        plaeWidthLayout->addWidget(planeWidthSpinBox);


        controlLayout->addLayout(plaeWidthLayout);

        planeHeightLayout = new QHBoxLayout();
        planeHeightLayout->setObjectName(QString::fromUtf8("planeHeightLayout"));
        label_2 = new QLabel(gameOfLifeWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        planeHeightLayout->addWidget(label_2);

        planeHeightSpinBox = new QSpinBox(gameOfLifeWidget);
        planeHeightSpinBox->setObjectName(QString::fromUtf8("planeHeightSpinBox"));

        planeHeightLayout->addWidget(planeHeightSpinBox);


        controlLayout->addLayout(planeHeightLayout);

        intervallLayout = new QHBoxLayout();
        intervallLayout->setObjectName(QString::fromUtf8("intervallLayout"));
        label_3 = new QLabel(gameOfLifeWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        intervallLayout->addWidget(label_3);

        intervalSpinBox = new QSpinBox(gameOfLifeWidget);
        intervalSpinBox->setObjectName(QString::fromUtf8("intervalSpinBox"));

        intervallLayout->addWidget(intervalSpinBox);


        controlLayout->addLayout(intervallLayout);

        startStopLayout = new QHBoxLayout();
        startStopLayout->setObjectName(QString::fromUtf8("startStopLayout"));
        startButton = new QPushButton(gameOfLifeWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        startStopLayout->addWidget(startButton);

        pushButton = new QPushButton(gameOfLifeWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        startStopLayout->addWidget(pushButton);

        stopButton = new QPushButton(gameOfLifeWidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        startStopLayout->addWidget(stopButton);


        controlLayout->addLayout(startStopLayout);

        clearButton = new QPushButton(gameOfLifeWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        controlLayout->addWidget(clearButton);

        importExportLeyout = new QHBoxLayout();
        importExportLeyout->setObjectName(QString::fromUtf8("importExportLeyout"));
        importButton = new QPushButton(gameOfLifeWidget);
        importButton->setObjectName(QString::fromUtf8("importButton"));

        importExportLeyout->addWidget(importButton);

        exportButton = new QPushButton(gameOfLifeWidget);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));

        importExportLeyout->addWidget(exportButton);


        controlLayout->addLayout(importExportLeyout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        controlLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(controlLayout);


        retranslateUi(gameOfLifeWidget);

        QMetaObject::connectSlotsByName(gameOfLifeWidget);
    } // setupUi

    void retranslateUi(QWidget *gameOfLifeWidget)
    {
        gameOfLifeWidget->setWindowTitle(QCoreApplication::translate("gameOfLifeWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("gameOfLifeWidget", "Plane width", nullptr));
        planeWidthSpinBox->setSuffix(QCoreApplication::translate("gameOfLifeWidget", " cells", nullptr));
        label_2->setText(QCoreApplication::translate("gameOfLifeWidget", "Plane height", nullptr));
        planeHeightSpinBox->setSuffix(QCoreApplication::translate("gameOfLifeWidget", " cells", nullptr));
        label_3->setText(QCoreApplication::translate("gameOfLifeWidget", "Generation intervall", nullptr));
        intervalSpinBox->setSuffix(QCoreApplication::translate("gameOfLifeWidget", " ms", nullptr));
        startButton->setText(QCoreApplication::translate("gameOfLifeWidget", "Start", nullptr));
        pushButton->setText(QCoreApplication::translate("gameOfLifeWidget", "Next Generation", nullptr));
        stopButton->setText(QCoreApplication::translate("gameOfLifeWidget", "Stop", nullptr));
        clearButton->setText(QCoreApplication::translate("gameOfLifeWidget", "Clear", nullptr));
        importButton->setText(QCoreApplication::translate("gameOfLifeWidget", "import", nullptr));
        exportButton->setText(QCoreApplication::translate("gameOfLifeWidget", "export", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gameOfLifeWidget: public Ui_gameOfLifeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOFLIFEWIDGET_H
