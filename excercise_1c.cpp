#include <iostream>
#include <vector>
#include <random>

using namespace std;

class Automaton {
public:
    int width, height;

    /* 
    current: for game-state being displayed
    updated: for generating the next evolution step of the game
    */
    vector<short> current;
    vector<short> updated;

    void fillRand() {
        "Fills the vector 'current' with pseudo-random numbers choosing between 1 and 0.";
        //!WARNING! Currently this distribution is not really pseudo-random, 1 and 0 keep generating in the same sequence.
        random_device rd;
        uniform_int_distribution<short> dist(0, 1);
        for (int i = 0; i < height*width; i++) {
            current.push_back(dist(rd));
        };
    }

    void printA() {
        "Prints the 'current' vector to the console as a matrix, depending on the user's choice of width and height.";
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                cout << current[x + y*height] << ' ';
            };
            cout << endl;
	    };
    }

    void insert(int x, int y, short state) {
        "Inserts a short(state) at the chosen x and y coordinate. Coordinates start at zero and in contrast to a cartesian plane, the y-coordinates direction is from top to bottom. The x-coordinte's direction is normal, from left to right.";
        current[x + y*height] = state;
    };

    void surroundCells(int xCoord,int yCoord) {
        "For a cell specified by x and y coordinates, prints out the specified cell with the 8 cells having direct contact with the specified cell in a 3x3 matrix; contact by corners also counts.";
        // !WARNING! Currently none of the edge cases are supported, for example, if one would choose a cell touching any of the walls of the game-plane, this function would not work.
        short upL, up, upR, l, r, botL, bot, botR;
        int leftX, rightX, topY, botY;

        if (xCoord == 0) {
            leftX = width-1;
            rightX = xCoord+1;
        } else {
            leftX = xCoord-1;
            rightX = (xCoord+1) % width;
        }

        if (yCoord == 0) {
            topY = (height-1)*height;
            botY = (yCoord+1)*height;
        } else {
            topY = (yCoord-1)*height;
            botY = ((yCoord+1) % height)*height;
        }

        upL =  current[leftX + topY];
        up =   current[xCoord + topY];
        upR =  current[rightX + topY];
        l =    current[leftX + yCoord];
        r =    current[rightX + yCoord];
        botL = current[leftX + botY];
        bot =  current[xCoord + botY];
        botR = current[rightX + botY];

        // Standard case, specified cell not touching any of walls of the game-plane
        // upL =  current[(x-1) + (y-1)*height];
        // up =   current[x + (y-1)*height];
        // upR =  current[(x+1) + (y+1)*height];
        // l =    current[(x-1) + y*height];
        // r =    current[(x+1) + y*height];
        // botL = current[(x-1) + (y+1)*height];
        // bot =  current[x + (y+1)*height];
        // botR = current[(x+1) + (y+1)*height];

        cout << "Top Y: " << topY << endl;
        cout << "Bot Y: " << botY << endl;
        cout << "Left X: " << leftX << endl;
        cout << "Right X: " << rightX << endl;

        cout << upL << up << upR << endl;
        cout << l << current[xCoord + yCoord*height] << r << endl;
        cout << botL << bot << botR << endl;
    }

    void evolve() {
    }

    Automaton(int w = 30, int h = 30) {
        "Class constructor. User can choose width(w) and height(h) of the game-plane. If either parameter is not specified, it defaults to 30";
        width = w;
        height = h;
    }
};


int main(){

    // Demonstration code:
    Automaton aut(10,10);

    aut.fillRand();
    cout << "Your game-plane:\n";
    aut.printA();

    cout << "Cells sourrounding the cell at coordinate x=2 | y=2:\n";
    aut.surroundCells(0, 9);

    // TEST
    // int width = 9;
    // int coord = 2;

    // cout << "Modulo: " << coord % width << "\n";
    // cout << "Div: " << coord / width << "\n";


    // TEST

    return 0;
}