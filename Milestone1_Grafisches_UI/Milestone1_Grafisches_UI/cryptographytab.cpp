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
    ui->comboBox->addItem("encode");
    ui->comboBox->addItem("decode");
    ui->comboBox->addItem("overlay");

    //ui->planeWidthSpinBox->setValue(ui->golWidget->widthC);
    //ui->planeHeightSpinBox->setValue(ui->golWidget->heightC);
    //connect(evolveTimer, SIGNAL(timeout()), ui->golWidget, SLOT(evolvePlane()));
    //connect(ui->clearButton, SIGNAL(clicked()), ui->golWidget,SLOT(clearPlane()));
    //connect(ui->evolveButton, SIGNAL(clicked()), ui->golWidget, SLOT(evolvePlane()));
}

cryptographytab::~cryptographytab()
{
    delete ui;
}

void cryptographytab::on_encodeButton_clicked()
{
    if (ui->encodeButton->text()== "Encode"){
        ui->label_4->setText("Decode") ;
    } else if (ui->encodeButton->text()== "Decode"){
        ui->label_4->setText("Decode") ;
    }  else if (ui->encodeButton->text()== "Overlay"){
        ui->label_4->setText("Overlay") ;
    }
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
/*
 *Import file into the array
 */

//std::vector<int> bildArray;
void cryptographytab::on_comboBox_currentIndexChanged(const QString &arg1)
{
    if(arg1 == "encode"){
        ui->ImportButton->setText("Load Key");
        ui->importbildbutton->setText("Load Image");
        ui->encodeButton->setText("Encode");

    } else if(arg1 == "decode"){
        ui->ImportButton->setText("Load Key");
        ui->importbildbutton->setText("Load Image");
        ui->encodeButton->setText("decode");

    } else if(arg1 == "overlay"){
        ui->ImportButton->setText("Load Image 2");
        ui->importbildbutton->setText("Load Image 1");
        ui->encodeButton->setText("Overlay");
    }

    ui->label_4->setText(arg1);
}

void cryptographytab::on_pushButton_4_clicked()
{
    ui->label_4->setText(ui->comboBox->currentText());
}

void cryptographytab::on_ImportButton_clicked()
{
    QString keyFileName = QFileDialog::getOpenFileName(this,
        tr("Open Key"), "/", tr("Image Files (*.txt)"));
}

void cryptographytab::on_importbildbutton_clicked()
{
    //import NBild
    imageFileName = QFileDialog::getOpenFileName(this,
        tr("Open Image"), "/", tr("Image Files (*.txt)"));
}
