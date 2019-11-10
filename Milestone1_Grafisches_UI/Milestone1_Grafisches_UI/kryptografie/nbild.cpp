#include <iostream>
#include <fstream>
#include <string>
#include "static.h"
#include "nbild.h"

using namespace std;

// Aufgabe 2a)
// Klasse NBild: Speichert NBild, importiert und exportiert ein Bild aus/in eine Datei


// import data from file
void NBild::import_image(string fileName){
    Static::point dimensions = this->st->getDimensions(fileName);
    this->width = dimensions.x;
    this->height = dimensions.y;

    // allocate inner array, now that we know the dimensions
    this->image_data = new bool*[this->height];
    for(int i=0; i<this->height; i++){
        this->image_data[i] = new bool[this->width];
    }

    //populate the inner array with the contents on the image file
    ifstream myfile (fileName);

    if (myfile.is_open()){
      string line;
      for (int y=0; getline (myfile,line); y++){
          for(int x=0; x<line.length(); x++){
              this->image_data[y][x] = (line.substr(x,1) == "1");
          }
      }
      myfile.close();
    }
}

// export data to file
void NBild::export_image(string fileName){
    ofstream fout(fileName);
    for(int x=0; x<this->height; x++){
        for(int y=0; y<this->width; y++){
            fout << this->image_data[x][y];
        }
        fout << endl;
    }
    fout.close();
}

//2e
//eine Funktion die zwei Bilder als Eingabe erwartet und als Ausgabe ein Bild erzeugt, so als würde man die beiden Bilder übereinanderlegen
// paste another image over existing contents
NBild* NBild::paste_over(NBild* bild1, NBild* bild2){
    for(int x=0; x<this->height; x++){
        for(int y=0; y<this->width; y++){
            // if new image has ones, set ones at inner_arrays coordinates to 1
            if(bild1->image_data[x][y]){
                bild2->image_data[x][y];
            }
        }
    }
    return bild2;
}


// prevend memory leakage
void NBild::delete_image(){
    for(int i=0; i<this->height; i++){
        delete this->image_data[i];
    }
    delete this->image_data;
    cout << "deleted";
}

NBild::NBild(){
    this->st = new Static();
}

NBild::NBild(bool** image, int width, int height){
    this->image_data = image;
    this->width = width;
    this->height = height;
}
