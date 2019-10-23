#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int arr[9];

int main() {
    string line;
    int width;
    int height;
    ifstream myFile ("example_file.txt");

    if (myFile.is_open()) {
        getline(myFile, line);

        // while (getline(myFile, line)) {
        //     cout << line << '\n';
        // }
        // cout << "Getline blank: " << getline(myFile, line);
    myFile.close();
    }
    else {
        cout << "Unable to open file";
    }


    return 0;
}