#include "gameoflifetab.h"
#include "ui_gameoflifetab.h"
#include <iostream>
#include <QTimer>

gameOfLifeTab::gameOfLifeTab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gameOfLifeTab),
    evolveTimer(new QTimer(this))
{
    ui->setupUi(this);

    connect(evolveTimer, SIGNAL(timeout()), ui->golWidget, SLOT(evolvePlane()));
    connect(ui->clearButton, SIGNAL(clicked()), ui->golWidget,SLOT(clearPlane()));
    connect(ui->evolveButton, SIGNAL(clicked()), ui->golWidget, SLOT(evolvePlane()));


}

gameOfLifeTab::~gameOfLifeTab()
{
    delete ui;
}

void gameOfLifeTab::on_startButton_clicked()
{
    if (evolveTimerActive == true) {
        evolveTimer->stop();
        evolveTimerActive = false;
    } else {
        evolveTimer->start(100);
        evolveTimerActive = true;
    }
}
