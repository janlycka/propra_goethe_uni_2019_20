#include "cryptographytab.h"
#include "ui_cryptographytab.h"
#include <iostream>
#include <string.h>
#include "kryptografie/nbild.h"
#include "kryptografie/cbild.h"

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
    //connect(ui->importbildbutton, SIGNAL(clicked()), ui->Cryptowidget,SLOT(populateVector(main_bild)));
    //connect(ui->evolveButton, SIGNAL(clicked()), ui->golWidget, SLOT(evolvePlane()));
}

cryptographytab::~cryptographytab()
{
    delete ui;
}

void cryptographytab::on_encodeButton_clicked()
{
    if(state=="encode"){
        encoded_bild = new CBild();
        encoded_bild->encode_image(main_bild, key_bild);
        NBild *nb = encoded_bild->export_nbild();

        //delete &nb;
        //encoded_bild->delete_image();
        ui->Cryptowidget_3->populateVector(nb);
    }
    if(state=="decode"){
        encoded_bild = new CBild();
        encoded_bild->import_image(imageFileName.toStdString());

        //ui->Cryptowidget->populateVector(encoded_bild->export_nbild());
        //ui->Cryptowidget_2->populateVector(key_bild);
        main_bild = encoded_bild->decode_image(encoded_bild, key_bild);
        ui->Cryptowidget_3->populateVector(main_bild);
    }
    if(state=="overlay"){
        NBild* bild1 = new NBild();
        bild1->import_image(imageFileName.toStdString());

        NBild* bild2 = new NBild();
        bild2->import_image(keyFileName.toStdString());

        bild2->paste_over(bild1, bild2);
        ui->Cryptowidget_3->populateVector(bild2);

        //saveTwoOverlainImagesEncodedWithASingleKey(bild1, bild2, arg3);
    }
}

void cryptographytab::on_createKeyButton_clicked()
{
    //create key
    QString saveKey = QFileDialog::getSaveFileName(this,
        tr("Save Key"), "/", tr("Image Files (*.txt)"));

    keyFileName = saveKey;

    int x = main_bild->width;
    int y = main_bild->height;

        bool** ranBild = new bool*[y];//={};
        for(int a=0; a<y; a++){
            ranBild[a] = new bool[x];
        }

        for (int i=0;i<y;i++){
            for (int j=0; j<x;j++){
              ranBild[i][j]=rand()%2;
     //       cout << ranBild[i][j] << " ";
            }
        }

        key_bild = new NBild(ranBild, x, y);
        key_bild->export_image(saveKey.toStdString());

        ui->Cryptowidget_2->populateVector(key_bild);

        if(key_bild != NULL && main_bild!= NULL){
            ui->encodeButton->setEnabled(true);
            ui->pushButton->setEnabled(true);
        }
}

void cryptographytab::on_decodeButton_clicked()
{
    //decode
}

void cryptographytab::on_comboBox_currentIndexChanged(const QString &arg1)
{
    if(arg1 == "encode"){
        ui->label->setText("Original Picture");
        ui->label_2->setText("key");
        ui->label_3->setText("Ercrypted Picture");
        ui->ImportButton->setText("Load Key");
        ui->importbildbutton->setText("Load Image");
        ui->encodeButton->setText("Encode");

    } else if(arg1 == "decode"){
        ui->label->setText("Ercrypted Picture");
        ui->label_2->setText("key");
        ui->label_3->setText("Decrypted Picture");
        ui->ImportButton->setText("Load Key");
        ui->importbildbutton->setText("Load Image");
        ui->encodeButton->setText("decode");

    } else if(arg1 == "overlay"){
        ui->label->setText("Picture 1");
        ui->label_2->setText("Picture 2");
        ui->label_3->setText("Overlaid Pictures (white-biased)");
        ui->ImportButton->setText("Load Image 2");
        ui->importbildbutton->setText("Load Image 1");
        ui->encodeButton->setText("Overlay");
    }

    ui->encodeButton->setEnabled(false);
    ui->createKeyButton->setEnabled(false);
    ui->pushButton->setEnabled(false);

    ui->label_4->setText(arg1);
    state = arg1;
}

void cryptographytab::on_pushButton_4_clicked()
{
    ui->label_4->setText(ui->comboBox->currentText());
}

void cryptographytab::on_ImportButton_clicked()
{
    keyFileName = QFileDialog::getOpenFileName(this,
        tr("Open Key"), "/", tr("Image Files (*.txt)"));

    key_bild = new NBild();
    key_bild->import_image(keyFileName.toStdString());
    ui->Cryptowidget_2->populateVector(key_bild);

    ui->label_6->setText(keyFileName);


    if(key_bild != NULL && main_bild!= NULL){
        ui->encodeButton->setEnabled(true);
        ui->pushButton->setEnabled(true);
    }
}

void cryptographytab::on_importbildbutton_clicked()
{
    //import NBild
    imageFileName = QFileDialog::getOpenFileName(this,
        tr("Open Image"), "/", tr("Image Files (*.txt)"));

    main_bild = new NBild();
    main_bild->import_image(imageFileName.toStdString());

    ui->Cryptowidget->populateVector(main_bild);

    ui->label_5->setText(imageFileName);
    //cellVec[5]=true;
    if(main_bild != NULL){
    ui->createKeyButton->setEnabled(true);
}
    if(key_bild != NULL && main_bild!= NULL){
        ui->encodeButton->setEnabled(true);
        ui->pushButton->setEnabled(true);
    }
}

void cryptographytab::on_pushButton_clicked()
{
    //export NBild
    QString saveFile = QFileDialog::getSaveFileName(this,
        tr("Save Image"), "/", tr("Image Files (*.txt)"));
    ui->label_8->setText(saveFile);

    if(state=="encode"){
        encoded_bild->export_image(saveFile.toStdString());
    }
    if(state=="decode"){
        CBild* bild1 = new CBild();
        bild1->import_image(imageFileName.toStdString());

        NBild* key = new NBild();
        key->import_image(keyFileName.toStdString());

        NBild* nbild = bild1->decode_image(bild1, key);
        nbild->export_image(saveFile.toStdString());
    }
    if(state=="overlay"){
        NBild* bild1 = new NBild();
        bild1->import_image(imageFileName.toStdString());

        NBild* bild2 = new NBild();
        bild2->import_image(keyFileName.toStdString());
        bild2->paste_over(bild1, bild2);

        bild2->export_image(saveFile.toStdString());

        //saveTwoOverlainImagesEncodedWithASingleKey(bild1, bild2, arg3);
    }

}
