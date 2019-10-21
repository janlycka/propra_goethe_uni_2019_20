#include <iostream>
#include <vector>
#include <random>

using namespace std;

class Automaton {
public:
    int width, height;

    vector<short> current;
    vector<short> updated;

    void fillRand() {
        random_device rd;
        uniform_int_distribution<short> dist(0, 1);
        for (int i = 0; i < height*width; i++) {
            current.push_back(dist(rd));
        };
    }

    void printA() {
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                cout << current[x + y*height] << ',';
            };
            cout << endl;
	    };
    }

    void insert(int x, int y, short state) {
        current[x + y*height] = state;
    };

    void surroundCells(int x,int y) {
        short upL, up, upR, l, r, botL, bot, botR;

        // Standard
        upL =  current[(x-1) + (y-1)*height];
        up =   current[x + (y-1)*height];
        upR =  current[(x+1) + (y+1)*height];
        l =    current[(x-1) + y*height];
        r =    current[(x+1) + y*height];
        botL = current[(x-1) + (y+1)*height];
        bot =  current[x + (y+1)*height];
        botR = current[(x+1) + (y+1)*height];

        cout << upL << up << upR << endl;
        cout << l << current[x + y*height] << r << endl;
        cout << botL << bot << botR << endl;
    }

    void evolve() {
    }

    Automaton(int w = 30, int h = 30) {
        width = w;
        height = h;
    }
};


int main(){

    Automaton aut(10,10);

    // aut.fillRand();
    aut.printA();

    aut.surroundCells(2, 2);

    // cout << endl << 0 % 15;

    return 0;
}