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

    ui->planeWidthSpinBox->setValue(ui->golWidget->widthC);
    ui->planeHeightSpinBox->setValue(ui->golWidget->heightC);
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
        ui->startButton->setText("Start");

    } else {
        evolveTimer->start(100);
        evolveTimerActive = true;
        ui->startButton->setText("Stop");
    }
}

void gameOfLifeTab::on_planeWidthSpinBox_valueChanged(int arg1)
{
    GolWidget *gol = ui->golWidget;
    ui->golWidget->widthC = arg1;
    std::cout << "widthSpinBox>>> " << "width: " << gol->widthC << " height: " <<  gol->heightC << std::endl;
    ui->golWidget->fillWithBlank();
    ui->golWidget->update();
}

void gameOfLifeTab::on_planeHeightSpinBox_valueChanged(int arg1)
{
    GolWidget *gol = ui->golWidget;
    ui->golWidget->heightC = arg1;
    std::cout << "widthSpinBox>>> " << "width: " << gol->widthC << " height: " <<  gol->heightC << std::endl;
    ui->golWidget->fillWithBlank();
    ui->golWidget->update();
}

void gameOfLifeTab::on_randomizeButton_clicked()
{
    ui->golWidget->randomize();
}
