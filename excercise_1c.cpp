#include <iostream>
#include <vector>
#include <random>
#include <fstream>
#include <sstream>

using namespace std;

class Automaton {
public:
    int width, height;
    vector<short> currentPlane;
    vector<short> updatedPlane;

    void fillRand(vector<short>& arr) {
        "Fills the vector 'currentPlane' with pseudo-random numbers choosing between 1 and 0.";
        //!WARNING! Currently this distribution is not pseudo-random, 1 and 0 keep generating in the same sequence.
        random_device rd;
        uniform_int_distribution<short> dist(0, 1);
        for (int i = 0; i < height*width; i++) {
            arr.push_back(dist(rd));
        }
    }

    void printA(vector<short> arr) {
        "Prints the arr(vector<short>) to the console as a matrix, depending on the user's choice of width and height.";
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                cout << arr[x + y*height] << ' ';
            };
            cout << endl;
	    }
    }

    void insert(int x, int y, short state) {
        "Inserts a short(state) at the chosen x and y coordinate into the 'currentPlane' vector. Coordinates start at zero and in contrast to a cartesian plane, the y-coordinates direction is from top to bottom. The x-coordinte's direction is normal, from left to right.";
        currentPlane[x + y*height] = state;
    }

    short surroundCells(int xCoord,int yCoord) {
        "For a cell in the 'currentPlane' vector, specified by x and y coordinates, returns the amount of alive neighbouring cells. A neghbouring cell is any of the 8 cells surrounding a cell.";
        short upL, up, upR, l, r, botL, bot, botR;
        int leftX, rightX, topY, botY;

        // leftX and rightX
        if (xCoord == 0) {
            leftX = width-1;
            rightX = xCoord+1;
        } else {
            leftX = xCoord-1;
            rightX = (xCoord+1) % width;
        }

        // topY and botY
        if (yCoord == 0) {
            topY = (height-1)*height;
            botY = (yCoord+1)*height;
        } else {
            topY = (yCoord-1)*height;
            botY = ((yCoord+1) % height)*height;
        }

        // The eight sourrounding cells depending on leftX, rightX, topY and botY.
        upL =  currentPlane[leftX + topY];
        up =   currentPlane[xCoord + topY];
        upR =  currentPlane[rightX + topY];
        l =    currentPlane[leftX + (yCoord*height)];
        r =    currentPlane[rightX + (yCoord*height)];
        botL = currentPlane[leftX + botY];
        bot =  currentPlane[xCoord + botY];
        botR = currentPlane[rightX + botY];

        // DEBUG
        // cout << upL << up << upR << endl;
        // cout << l << currentPlane[xCoord + yCoord*height] << r << endl;
        // cout << botL << bot << botR << endl;
        // cout << "topY: " << topY << endl;
        // cout << "botY: " << botY << endl;
        // cout << "leftX: " << leftX << endl;
        // cout << "rightX: " << rightX << endl;
        // cout << "yCoord: " << yCoord << endl;
        // cout << "xCoord: " << xCoord << endl;
        // DEBUG

        return upL + up + upR + l + r + botL + bot + botR;
    }

    short evolveCell(int xCoord, int yCoord) {
        "Determines whether or not the cell at xCoord and yCoord dies, survives or gets created. Returns either 1 or 0";
        short surrAmnt = surroundCells(xCoord, yCoord);
        
        // If cell is dead:
        if (currentPlane[xCoord + yCoord*height] == 0) {
            if (surrAmnt == 3) {
                return 1;
            }
            else {return 0;}
        }
        // If cell is alive:
        else if (surrAmnt == 2 || surrAmnt == 3) {
            return 1;
        }
        else {return 0;}
    }

    void evolvePlane() {
        "Applies the 'evolveCell' function to every cell of the 'currentPlane' vector und pushes the result into the 'updatedPlane' vector.";
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                updatedPlane.push_back(evolveCell(x, y));
            };
	    };
    }

    void copyVec(vector<short> from, vector<short>& to) {
        "Clears to(vector<short>) and copies all elements of from(vector<short>) to 'to'";
        to.clear();
        for (short i : from) {
            to.push_back(i);
        }
    }

    void updateGame() {
        "Iterates one step of the game of life and prints the result to the console.";
        cout << "\n";
        evolvePlane();
        copyVec(updatedPlane, currentPlane);
        printA(currentPlane);
        updatedPlane.clear();
    }

    void import(string inputFile) {
        string line;
        ifstream workingFile(inputFile);

        if (workingFile.is_open()) {
            // Clears currentPlane for later import of gameplane
            currentPlane.clear();
            // Extracting width from inputFile
            getline(workingFile, line);
            width = int(stoi(line));
            // Extracting height from inputFile
            getline(workingFile, line);
            height = int(stoi(line));

            ostringstream gameplane;
            gameplane << workingFile.rdbuf();
            line = gameplane.str();

        for (int i : line) {
            if (i != '\n') {
                if (i == 'o') {
                    currentPlane.push_back(0);
                }
                else if (i == '*') {
                    currentPlane.push_back(1);
                }
            }
        }

        }
        else {
            cout << "Unable to open file";
        }

    }

    Automaton(int w = 30, int h = 30) {
        "Class constructor. User can choose width(w) and height(h) of the game-plane. If either parameter is not specified, it defaults to 30";
        width = w;
        height = h;
    }
};


int main(){

    // Demonstration code:
    Automaton aut;
    aut.import("import_test.txt");
    aut.printA(aut.currentPlane);

    string blank;
    while (true) {
        aut.updateGame();
        cin >> blank;
    };

    return 0;
}