#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

/*
* =================================================
* AUFGABE 1c+d)
* =================================================
*/

class Automaton {
public:
    int width, height;
    // Current is the main game plane. Updated is an (empty) plane used for the construction of a plane in an evolutionary process.
    vector<short> current;
    vector<short> updated;

    /* Fills the vector 'current' with pseudo-random numbers choosing either 1 or 0.
     */
    void fillRand(vector<short>& arr) {
        current.clear();
        srand(time(0));
        for (int i = 0; i < height * width; i++) {
            arr.push_back(rand() % 2);
        }
    }

    /* Prints the arr(vector<short>) to the console as a matrix, depending on the user's choice of width and height.
     */
    void printA(vector<short> arr) {
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                cout << arr[x + y * width];
            };
            cout << endl;
	    }
    }

    /* Returns a string illustrating the vector arr as a matrix, depending on the width and height of the gameplane.
     */
    string genString(vector<short>& arr) {
        string result;
        for (int y = 0; y < height; y++){
            for (int x = 0; x < width; x++) {
                result += to_string(arr[x + y * width]);
            }
            result += '\n';
        }
        return result;
    }

    /* Returns a string illustrating the vector arr as a matrix in the form of import/export files.
     */
    string genExpString(vector<short>& arr) {
        string result;
        for (int y = 0; y < height; y++){
            for (int x = 0; x < width; x++) {
                if (arr[x + y * width] == 0){
                    result += "o";
                }
                else {
                    result += "*";
                }
            }
            result += '\n';
        }
        return result;
    }

    /* Inserts a short(state) at the chosen x and y coordinate into the 'current' vector.
     * Coordinates start at zero and in contrast to a cartesian plane, the y-coordinates direction is
     * from top to bottom. The x-coordinte's direction is normal, from left to right.
     */
    void insert(int x, int y, short state) {
        current[x + y * width] = state;
    }

    /* For a cell in the 'current' vector, specified by x and y coordinates, returns the amount of alive neighbouring cells.
     * A neghbouring cell is any of the 8 cells surrounding a cell.
     */
    short surroundCells(int xCoord,int yCoord) {

        short upL, up, upR, l, r, botL, bot, botR;
        int leftX, rightX, topY, botY;

        // leftX and rightX
        if (xCoord == 0) {
            leftX = width-1;  // special case leftX == 0
            rightX = xCoord+1;
        } else {
            leftX = xCoord-1;
            rightX = (xCoord+1) % width;  // % for special case rightX+1 == width
        }

        // topY and botY
        if (yCoord == 0) {
            topY = (height-1)*width;  // special case topY == 0
            botY = (yCoord+1)*width;
        } else {
            topY = (yCoord-1)*width;
            botY = ((yCoord+1) % height)*width; // % for special case botY+1 == height
        }

        // The eight sourrounding cells depending on leftX, rightX, topY and botY.
        upL =  current[leftX + topY];
        up =   current[xCoord + topY];
        upR =  current[rightX + topY];
        l =    current[leftX + (yCoord*width)];
        r =    current[rightX + (yCoord*width)];
        botL = current[leftX + botY];
        bot =  current[xCoord + botY];
        botR = current[rightX + botY];

        // DEBUG
        // cout << upL << up << upR << endl;
        // cout << l << current[xCoord + yCoord*width] << r << endl;
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

    /* Determines whether or not the cell at xCoord and yCoord dies, survives or gets created. Returns either 1 or 0.
     */
    short evolveCell(int xCoord, int yCoord) {
        short surrAmnt = surroundCells(xCoord, yCoord);
        
        // If cell is dead:
        if (current[xCoord + yCoord * width] == 0) {
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

    /* Applies the 'evolveCell' function to every cell of the 'current' vector und pushes the result into the 'updated' vector.
     */
    void evolvePlane() {
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                updated.push_back(evolveCell(x, y));
            }
        }
    }

    /* Clears to(vector<short>) and copies all elements of from(vector<short>) to 'to'.
     */
    void copyVec(vector<short> from, vector<short>& to) {
        to.clear();
        for (short i : from) {
            to.push_back(i);
        }
    }

    /* Iterates one step of the game of life and prints the result to the console.
     */
    void updateGame() {
        cout << "\n";
        evolvePlane();
        copyVec(updated, current);
        printA(current);
        updated.clear();
    }

    /* Imports the given file and creates the automaton.
     */
    void importPlane(string inputFile) {
        string line;
        ifstream workingFile(inputFile);

        if (workingFile.is_open()) {
            // Clears current for later import of gameplan
            current.clear();
            // Extracting width from inputFile (assuming that 1st number is the width)
            getline(workingFile, line);
            width = int(stoi(line));
            // Extracting height from inputFile (assuming that this number is the height)
            getline(workingFile, line);
            height = int(stoi(line));

            ostringstream gameplane;
            gameplane << workingFile.rdbuf();
            line = gameplane.str();

        // Converts the plane from import file into the program.
        for (int i : line) {
            if (i != '\n') {
                if (i == 'o') {
                    current.push_back(0);
                }
                else if (i == '*') {
                    current.push_back(1);
                }
            }
            workingFile.close();
        }

        cout << "\nImport successful.\n\n";
        printA(current);
        cout << endl;

        }
        else {
            cout << "\nUnable to open file\n\n";
        }
    }

    /* Exports the automaton into a file.
     */
    void exportPlane(vector<short>& arr, string filename) {
        ofstream workingFile(filename);

        if (workingFile.is_open()) {
            workingFile << width << '\n' << height << '\n';
            workingFile << genExpString(arr);
            workingFile.close();
            cout << "Export successful.\n";
        }
        else {
            cout << "Unable to create/overwrite file.\n";
        } 
    }

    /* Class constructor.
     * User can choose width(w) and height(h) of the game-plane. If either parameter is not specified, it defaults to 30.
     */
    Automaton(int w = 30, int h = 30) {
        width = w;
        height = h;
    }
};

/*
* =================================================
* AUFGABE 1e)
* =================================================
*/

/* Returns true if a string is an integer number.
 */
bool isParam(string line){
    char* p;
    strtol(line.c_str(), &p, 10);
    return *p == 0;
    // source of the function: https://stackoverflow.com/questions/4654636/how-to-determine-if-a-string-is-a-number-with-c
}

int main(){

    // Creation of a default automaton.
    Automaton aut;
    aut.fillRand(aut.current);

    // Introduction
    cout << "\nWelcome to Game of Life!\n"
            "Useful information: x value increases rightwards and y value increases downwards.\n\n";

    // Auxiliary variables for user interface
    bool quit = false;
    bool validNumber, validNumber_2;
    string userInput, fileName;
    string newHeight, newWidth;
    string xInput, yInput;
    string stateInput;

    // This is the main loop of the game.
    while (quit == false) {
        cout << "Type 'help' for information on available commands.\n";
        cout << ">>> ";
        cin >> userInput;

       // Below the nine or rather ten input cases are listed.

        if (userInput == "help"){
            cout << "\nAvailable commands:\n"
                 << "print: Print the automaton to the console.\n"
                 << "resize: Change the size of the automaton.\n"
                 << "insert: Choose a single cell through its coordinates and manually change its state (0 or 1).\n"
                 << "random: Give the automaton new random numbers for each of its cells.\n"
                 << "evolve: Evolve the automaton.\n"
                 << "import: Import a text file.\n"
                 << "export: Export the current matrix into a text file.\n"
                 << "help: Show list of available commands.\n"
                 << "quit: Terminate the program.\n\n";
        }

        else if (userInput == "resize"){

            validNumber = false;

            // Until user has typed in a valid width, the program keeps asking the user to type in a new width
            while (validNumber == false){
                cout << "\nType in the new width: \n>>> ";
                cin >> newWidth;

                // Program checks whether string input is an integer number and whether it is a natural number
                if (isParam(newWidth)){
                    if (stoll(newWidth) < 1){
                        cout << "\nThis is not a valid width. Choose a natural number >0.\n";
                    }
                    else{
                        validNumber = true;
                        aut.width = stoll(newWidth);
                    }
                }
                else {cout << "\nThis is not a valid width. Choose a natural number >0.\n";}
            }

            validNumber = false;

            // Until user has typed in a valid width, the program keeps asking the user to type in a new width
            while (validNumber == false){
                cout << "\nType in the new height: \n>>> ";
                cin >> newHeight;

                // Program checks whether string input is an integer number and whether it is a natural number
                if (isParam(newHeight)){
                    if ((stoll(newHeight) < 1)){
                        cout << "\nThis is not a valid height. Choose a natural number >0.\n";
                    }
                    else{
                        validNumber = true;
                        aut.height = stoll(newHeight);
                        // Automaton is filled so that when size is changed from smaller to larger no bug will occur
                        aut.fillRand(aut.current);
                    }
                }
                else{cout << "\nThis is not a valid height. Choose a natural number >0.\n";}
            }

            cout << "\nYou have successfully changed width to " << aut.width << " and height to " << aut.height << ".\n\n";
            aut.printA(aut.current);
            cout << endl;
        }

        else if (userInput == "random"){
            cout << endl;
            aut.fillRand(aut.current);
            aut.printA(aut.current);
            cout << endl;
        }

        else if (userInput == "insert"){

            validNumber = false;
            validNumber_2 = false;

            // Until existing coordinates are typed in correctly, the program will keep asking to type in the coordinates
            while (validNumber == false){
                cout << "\nType in the x coordinate of the chosen cell: \n>>> ";
                cin >> xInput;
                cout << "\nType in the y coordinate of the chosen cell: \n>>> ";
                cin >> yInput;

                // Program checks whether the user input is an integer number and not e.g. string or float
                if (isParam(yInput) && isParam(xInput)){

                    // Program checks whether the numbers are within the plane (exist as coordinates)
                    if ((0 < stoll(xInput)) && (stoll(xInput)< aut.width + 1) && (0 < stoll(yInput)) && (stoll(yInput) < aut.height + 1)){
                            validNumber = true;

                            /* Now as the coordinates are validated, the user can type in a state.
                               Repeats until input is valid.*/
                            while (validNumber_2 == false) {
                                cout << "\nType in 0 or 1 to update the state of the cell: \n>>> ";
                                cin >> stateInput;

                                if (stateInput == "0" || stateInput == "1"){
                                    validNumber_2 = true;
                                    aut.insert(stoll(xInput)-1, stoll(yInput)-1, stoll(stateInput));}
                                else {cout << "\nThis is not a valid state. Choose either 0 or 1.\n";}
                            }
                    }
                    else {cout << "\nThe typed in coordinates do not exist.";}

                }
                else {cout << "\nThe typed in coordinates do not exist.";}
            }
            cout << endl;
            aut.printA(aut.current);
            cout << endl;
        }

        else if (userInput == "print"){
            cout << endl << aut.genString(aut.current) << endl;
        }

        else if (userInput == "evolve"){
            aut.updateGame();
            cout << endl;
        }

        else if (userInput == "import"){
            cout << "\nType in the name of the file you wish to import (e.g. name.txt). \n>>> ";
            cin >> fileName;
            aut.importPlane(fileName);
        }

        else if (userInput == "export"){
            cout << "\nChoose a name for your file (e.g. name.txt): \n>>> ";
            cin >> fileName;
            aut.exportPlane(aut.current,fileName);
        }

        else if (userInput == "quit"){
            quit = true;
            cout << "You have quit the game.\n";
        }

        else {
            cout << "This is not a valid command!\n";
        }
    }
    return 0;
}
