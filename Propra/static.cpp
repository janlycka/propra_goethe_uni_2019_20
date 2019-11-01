#include <iostream>
#include <fstream>
#include <string>

class Static {
public:
    // defines a structure to store dimenstions
    typedef struct point {
       int x;
       int y;
    } Point;

    // gets dimenstions of a picture stored in file "fileName"
    point getDimensions(std::string fileName){
        int x=0;
        int y=0;

        std::string line;

        std::ifstream myfile (fileName);

        if (myfile.is_open()){
          while ( getline (myfile,line)){
            y = line.length();
            x++;
          }
          myfile.close();
        }

        return {x, y};
    }

    Static(void){
        std::cout << 123;
    }
};
