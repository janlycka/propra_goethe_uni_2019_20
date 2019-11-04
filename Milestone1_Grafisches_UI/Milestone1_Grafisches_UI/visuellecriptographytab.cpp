#include "visuellecriptographytab.h"
#include "ui_visuellecriptographytab.h"

visuellecriptographytab::visuellecriptographytab(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::visuellecriptographytab)
{
    ui->setupUi(this);
}

visuellecriptographytab::~visuellecriptographytab()
{
    delete ui;
}
