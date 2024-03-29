﻿#include <QCoreApplication>
#include "static.h"
#include "nbild.h"
#include "cbild.h"
#include <iostream>

using namespace std;

//Aufgabe 2c
// eine statische Funktion, die ein Bild mit rein zufällig gesetzten Bildpunkten erzeugt. Die Größe des Bildes soll durch Funktionsparameter bestimmt werden
static NBild* task_C(int y,int x){

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
    return new NBild(ranBild, x, y);
    }

//Aufgabe 2f
//Speichert die Ausgabe die entsteht, wenn man zwei Bilder übereinander legt die mit dem gleichen Schlüssel verschlüsselt wurden.
static void saveTwoOverlainImagesEncodedWithASingleKey(CBild* cb1, CBild* cb2/*, NBild* key*/, string outputFile){
//    CBild* cb1 = new CBild();
//    cb1->encode_image(bild1,key);
//    CBild* cb2 = new CBild();
//    cb2->encode_image(bild2,key);
    CBild* output = cb1->paste_over(cb1,cb2);
    output->export_image(outputFile);
}

int main(int argc, char *argv[])
{
    string command = "";
    string arg1, arg2, arg3;
    cout << endl << "USAGE:" << endl;
    cout << "visualscript encode <source> <result> <key>" << endl;
    cout << "visualscript decode <image_a> <image_b> <result>" << endl;
    cout << "visualscript overlay <image_a> <image_b> <result>" << endl;
    cout << "visualscript ";

    cin >> command >> arg1 >> arg2 >> arg3;
    //2g
    //Implementiert ein Konsolenprogramm

    if(command=="encode"){
        cout << arg1 << " ---encoded(" << arg3 << ")--> " << arg2 << endl;
        NBild* bild = new NBild();
        bild->import_image(arg1);

        NBild* key = new NBild();
        key->import_image(arg3);

        CBild* cbild = new CBild();
        cbild->encode_image(bild, key);
        cbild->export_image(arg2);
    }
    if(command=="decode"){
        CBild* bild1 = new CBild();
        bild1->import_image(arg1);

        NBild* key = new NBild();
        key->import_image(arg2);

        NBild* nbild = bild1->decode_image(bild1, key);
        nbild->export_image(arg3);
    }
    if(command=="overlay"){
        CBild* bild1 = new CBild();
        bild1->import_image(arg1);

        CBild* bild2 = new CBild();
        bild2->import_image(arg2);

        saveTwoOverlainImagesEncodedWithASingleKey(bild1, bild2, arg3);
    }

    if(command=="random"){
        NBild* key = task_C(89,303);
        key->export_image(arg1);
    }
/*
    Static *st = new Static();
    Static::point dimensions = st->getDimensions("..\\..\\dateien\\beispielbild_1.txt");
    cout << "Dimensions: " << dimensions.x << " x " << dimensions.y << endl;

    NBild* bild = new NBild();
    bild->import_image("..\\..\\dateien\\beispielbild_1.txt");

    NBild* key = task_C(89,303);
    //key->import_image("..\\..\\dateien\\beispielbild_1.txt");

    //bild->export_image("..\\..\\dateien\\beispielbild_2.txt");

    CBild* cbild = new CBild();
    cbild->encode_image(bild, key);
    cbild->export_image("..\\..\\dateien\\verschluesseltes_bild.txt");

    //CBild* dbild = new CBild();
    //dbild->import_image("..\\..\\dateien\\verschluesseltes_bild.txt");
    //dbild->decode_image(dbild,key);

    NBild* dbild = cbild->decode_image(cbild,key);
    dbild->export_image("..\\..\\dateien\\dbild.txt");

    dbild->delete_image();
    cbild->delete_image();
    bild->delete_image();
    key->delete_image();

    delete bild;
    */
}
