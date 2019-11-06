#include "cryptographytab.h"
#include "ui_cryptographytab.h"
#include <iostream>

#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

cryptographytab::cryptographytab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cryptographytab)
{
    ui->setupUi(this);
}

cryptographytab::~cryptographytab()
{
    delete ui;
}
