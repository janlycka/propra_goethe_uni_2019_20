#include "cryptographytab.h"
#include "ui_cryptographytab.h"
#include <iostream>
#include <string.h>

#include <QFileDialog>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QMessageBox>

using namespace std;

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

void cryptographytab::on_encodeButton_clicked()
{
    //encode
}

void cryptographytab::on_createKeyButton_clicked()
{
    //creade key
}

void cryptographytab::on_decodeButton_clicked()
{
    //decode
}

QString imageFileName = "";
QString keyFileName = "";

void cryptographytab::on_pushButton_2_clicked()
{
    //import NBild
    imageFileName = QFileDialog::getOpenFileName(this,
        tr("Open Image"), "/", tr("Image Files (*.txt)"));
}

void cryptographytab::on_pushButton_3_clicked()
{
    QString keyFileName = QFileDialog::getOpenFileName(this,
        tr("Open Key"), "/", tr("Image Files (*.txt)"));
}
