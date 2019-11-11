#include <iostream>
#include <fstream>
#include <string>
#include "static.h"
#include "cbild.h"
#include "nbild.h"
#include<QDebug>

using namespace std;

// Aufgabe 2b)
// Klasse CBild: Speichert CBild, importiert und exportiert ein Bild in/aus eine/r Datei

// import data from file
void CBild::import_image(string fileName){
    Static::point dimensions = this->st->getDimensions(fileName);
    this->width = dimensions.x/2;
    this->height = dimensions.y/2;

    // allocate inner array, now that we know the dimensions
    this->image_data = new bool**[this->height];
    for(int i=0; i<this->height; i++){
        this->image_data[i] = new bool*[this->width];
        for(int e=0; e<this->width; e++){
            this->image_data[i][e] = new bool[4];
        }
    }

    //populate the inner array with the contents on the image file
    ifstream myfile (fileName);

    if (myfile.is_open()){
      string line;
      for (int y2=0, y=0; getline (myfile,line); y2++){
          for(int x2=0, x = 0; x2<line.length(); x2++){
              //even and odd lines should populate the first two and the latter values of ther Elementmatrix respectively
              if(y2%2==0){
                  this->image_data[y][x][x2%2] = (line.substr(x2,1) == "1");
              } else {
                  this->image_data[y][x][x2%2+2] = (line.substr(x2,1) == "1");
              }
              if(x2%2==1){x++;}
          }
          if(y2%2==1){y++;}
      }
      myfile.close();
    }
}

// export data to file
void CBild::export_image(string fileName){

    ofstream fout(fileName);
    if (fout.is_open())
      {
    for(int x=0; x<this->height; x++){
        //das CBild enthält ein array: bool[4], wobei dessen Elementenpaare [1,2], [3,4] jeweils 2 Linien im verschluesselten Bild vertreten. Darum 2 Durchlaeufe
        for(int y=0; y<this->width; y++){
            fout << this->image_data[x][y][0];
            fout << this->image_data[x][y][1];
        }
        fout << endl;
        for(int y=0; y<this->width; y++){
            fout << this->image_data[x][y][2];
            fout << this->image_data[x][y][3];
        }
        fout << endl;
    }
    fout.close();
    }
}

// export data to NBild
NBild* CBild::export_nbild(){

    int nWidth = this->width*2;
    int nHeight = this->height*2;

    NBild* tmpbild = NULL;
    bool** arr = new bool*[nHeight];

    for(int i=0; i<nHeight; i++){

        arr[i] = new bool[nWidth];
        for(int e=0; e<nWidth; e++){
            arr[i][e]=false;
        }
    }
qInfo() << "AA ";
    for(int x=0, x2=0; x<this->height; x++, x2+=2){
        //das CBild enthält ein array: bool[4], wobei dessen Elementenpaare [1,2], [3,4] jeweils 2 Linien im verschluesselten Bild vertreten. Darum 2 Durchlaeufe
        for(int y=0, y2=0; y<this->width; y++, y2+=2){

            //qInfo() << " new[" << x2 << "][" << y2 << "] << old[" << x << "][" << y << "][0]";
            arr[x2][y2] = this->image_data[x][y][0];
            //qInfo() << " new[" << x2+1 << "][" << y2 << "] << old[" << x << "][" << y << "][1]";
            arr[x2+1][y2] = this->image_data[x][y][1];
            //qInfo() << " new[" << x2 << "][" << y2+1 << "] << old[" << x << "][" << y << "][2]";
            arr[x2][y2+1] = this->image_data[x][y][2];
            //qInfo() << " new[" << x2+1 << "][" << y2+1 << "] << old[" << x << "][" << y << "][3]";
            arr[x2+1][y2+1] = this->image_data[x][y][3];
        }
    }

    tmpbild = new NBild(arr, this->width*2, this->height*2);
    return tmpbild;
}

// Aufgabe 2d
// import data from NBild
// eine Funktion mit der man ein Bild mit Hilfe von einem Schlüssel, gemäß der Vorgaben,
// verschlüsseln kann und eine weitere Funktion, welche die Verschlüsselung umkehrt
CBild* CBild::encode_image(NBild* bild, NBild* key){

    this->width = key->width;
    this->height = key->height;

    // allocate inner array, creating a new arraay in place of every pixel in the source array
    this->image_data = new bool**[this->height];
    for(int i=0; i<this->height; i++){
        this->image_data[i] = new bool*[this->width];
        for(int e=0; e<this->width; e++){
            this->image_data[i][e] = new bool[4];
            if(bild->image_data[i][e] != key->image_data[i][e]){
                //if Pixel true
                this->image_data[i][e][0] = false;
                this->image_data[i][e][1] = true;
                this->image_data[i][e][2] = true;
                this->image_data[i][e][3] = false;
            } else {
                //if Pixel false
                this->image_data[i][e][0] = true;
                this->image_data[i][e][1] = false;
                this->image_data[i][e][2] = false;
                this->image_data[i][e][3] = true;
            }
        }
    }
}

// Aufgabe 2d
// decode data from encoded CBild
// eine Funktion mit der man ein Bild mit Hilfe von einem Schlüssel, gemäß der Vorgaben,
// verschlüsseln kann und eine weitere Funktion, welche die Verschlüsselung umkehrt
NBild* CBild::decode_image(CBild* bild, NBild* key){

    this->width = key->width;
    this->height = key->height;

    // output array
    bool** resp = new bool*[this->height];
    for(int i=0; i<this->height; i++){
        resp[i] = new bool[this->width];
    }

    // allocate inner array, creating a new arraay in place of every pixel in the source array
    for(int i=0; i<this->height; i++){
        for(int e=0; e<this->width; e++){
            if(
              (key->image_data[i][e] && bild->image_data[i][e][0]==0 && bild->image_data[i][e][1]==1 && bild->image_data[i][e][2]==1 && bild->image_data[i][e][3]==0) ||
              (!key->image_data[i][e] && bild->image_data[i][e][0]==1 && bild->image_data[i][e][1]==0 && bild->image_data[i][e][2]==0 && bild->image_data[i][e][3]==1)
              ){
                //set Pixel to false
                resp[i][e]=false;
            } else {
                //set Pixel to true
                resp[i][e]=true;
            }
        }
    }
    return new NBild(resp, key->width, key->height);
}

// prevend memory leakage
void CBild::delete_image(){

    for(int i=0; i<this->height; i++){
        for(int e=0; e<this->width; e++){
            delete this->image_data[i][e];
        }
        delete this->image_data[i];
    }

    delete this->image_data;
    delete this;
    cout << "deleted";
}

//2e
//eine Funktion die zwei Bilder als Eingabe erwartet und als Ausgabe ein Bild erzeugt, so als würde man die beiden Bilder übereinanderlegen
// paste another image over existing contents
CBild* CBild::paste_over(CBild* bild1, CBild* bild2){
    for(int x=0; x<this->height; x++){
        for(int y=0; y<this->width; y++){
            // if new image has ones, set ones at inner_arrays coordinates to 1
            for(int z=0; z<4; z++){
            if(bild1->image_data[x][y][z]){
                bild2->image_data[x][y][z] = bild1->image_data[x][y][z];
            }
            }
        }
    }
    return bild2;
}

CBild::CBild(){
    this->st = new Static();
}

CBild::CBild(string fileName){
    Static::point dimensions = this->st->getDimensions(fileName);
    this->width = dimensions.x;
    this->height = dimensions.y;
}
