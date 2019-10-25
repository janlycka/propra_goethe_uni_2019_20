//#include <QCoreApplication>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string line;

    ifstream myfile ("dateien\\beispielbild_1.txt");

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

    //bool[][] imageData = new bool[1][2];


    if (myfile.is_open())
    {
      while ( getline (myfile,line) )
      {
          int a = 0;
          for(int b=0; b<y; b++){
              imageData[a][b] = line.substr(b, b+1);
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
