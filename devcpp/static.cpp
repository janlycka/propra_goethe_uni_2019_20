#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Static {
public:

    // defines a structure to store dimenstions
    typedef struct point {
       int x;
       int y;
    } Point;

    // gets dimenstions of a picture stored in file "fileName"
    point getDimensions(string fileName){
        int x=0;
        int y=0;

        string line;

        ifstream myfile (fileName);

        if (myfile.is_open()){
          while ( getline (myfile,line)){
            y = line.length();
            x++;
          }
          myfile.close();
        }

        return {x, y};
    }
};
