#include "visuellecriptographytab.h"
#include "ui_visuellecriptographytab.h"

visuellecriptographytab::visuellecriptographytab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::visuellecriptographytab)
{
    ui->setupUi(this);
}

visuellecriptographytab::~visuellecriptographytab()
{
    delete ui;
}
