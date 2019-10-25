//#include <QCoreApplication>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string line;

    //ifstream myfile ("C:\\Users\\Jan\\Documents\\projects\\propra_goethe_uni_2019_20\\dateien\\beispielbild_1.txt");
    ifstream myfile ("..\\dateien\\beispielbild_1.txt");

    int x = 0;
    int y = 0;

    if (myfile.is_open())
    {
      while ( getline (myfile,line) )
      {
        y = line.length();
        x++;
      }
      myfile.close();
    }

    cout << x << " " << y;

    bool imageData[1][2];


    if (myfile.is_open())
    {
      while ( getline (myfile,line) )
      {
          int a = 0;
          for(int b=0; b<y; b++){
              if(line.substr(b, b+1) == "1")
              imageData[a][b] = true;
          }

         // strlen()
        cout << line << '\n';
          a++;
      }
      myfile.close();
    }

    //else cout << "Unable to open file";
    return NULL;
}
