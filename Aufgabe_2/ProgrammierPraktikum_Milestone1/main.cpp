#include <QCoreApplication>
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
static void saveTwoOverlaidImagesEncodedWithASingleKey(NBild* cb1, NBild* cb2/*, NBild* key*/, string outputFile){
//    CBild* cb1 = new CBild();
//    cb1->encode_image(bild1,key);
//    CBild* cb2 = new CBild();
//    cb2->encode_image(bild2,key);
    NBild* output = cb1->paste_over(cb1,cb2);
    cb1->export_image(outputFile);
}

int main(int argc, char *argv[])
{
    while(true){
    string command = "";
    string arg1, arg2, arg3;
    cout << endl << "USAGE:" << endl;
    cout << "visualscript encode <source> <result> <key>" << endl;
    cout << "visualscript decode <image_a> <image_b> <result>" << endl;
    cout << "visualscript overlay <image_a> <image_b> <result>" << endl;
    cout << "visualscript random <result> <image_to_get_resolution_from> <any>" << endl;
    cout << "visualscript exit <any> <any> <any>" << endl;
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
        NBild* bild1 = new NBild();
        bild1->import_image(arg1);

        NBild* bild2 = new NBild();
        bild2->import_image(arg2);

        saveTwoOverlaidImagesEncodedWithASingleKey(bild1, bild2, arg3);
    }

    if(command=="random"){
        NBild* bild1 = new NBild();
        bild1->import_image(arg2);

        NBild* key = task_C(bild1->height,bild1->width);
        key->export_image(arg1);
    }

    if(command=="exit"){
        return 0;
    }
    }
}
