#include "visualcripto.h"
#include "ui_visualcripto.h"

visualcripto::visualcripto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::visualcripto)
{
    ui->setupUi(this);
}

visualcripto::~visualcripto()
{
    delete ui;
}
