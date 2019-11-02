#include "gameoflifetab.h"
#include "ui_gameoflifetab.h"

gameOfLifeTab::gameOfLifeTab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gameOfLifeTab)
{
    ui->setupUi(this);

    connect(ui->clearButton, SIGNAL(clicked()), ui->golWidget,SLOT(clearPlane()));
    connect(ui->evolveButton, SIGNAL(clicked()), ui->golWidget, SLOT(evolvePlane()));


}

gameOfLifeTab::~gameOfLifeTab()
{
    delete ui;
}
