#include <iostream>
#include <fstream>
#include <string>
#include "static.h"
#include<QDebug>

Static::Static()
{
}

// gets dimenstions of a picture stored in file "fileName"
Static::point Static::getDimensions(std::string fileName){
    int x=0;
    int y=0;

    std::string line;

    std::ifstream myfile (fileName);

    if (myfile.is_open()){
      while ( getline (myfile,line)){
        x = line.length();
        y++;
      }
      myfile.close();
    }

    return {x, y};
}
