#include <iostream>
#include <fstream>
#include <string>
#include "static.h"

using namespace std;

// Aufgabe 2b)
// speichert CBild, importiert und exportiert ein Bild aus/in eine Datei
class CBild
{
    public:
    //stores image data within the instance of this class
    bool **image_data;

    // saves image dimension lest if need be counted anew
    int width;
    int height;

    // static class reference
    Static *st;

    // import data from file
    void import_image(string fileName){
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
    void export_image(string fileName){
        ofstream fout(fileName);
        for(int x=0; x<this->height; x++){
            for(int y=0; y<this->width; y++){
                fout << this->image_data[x][y];
            }
            fout << endl;
        }
    }

    // prevend memory leakage
    void delete_image(string fileName){

    }

    CBild(){
        this->st = new Static();
    }

    CBild(string fileName){
        Static::point dimensions = this->st->getDimensions(fileName);
        this->width = dimensions.x;
        this->height = dimensions.y;
    }
};
