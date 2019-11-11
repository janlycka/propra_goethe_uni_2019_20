// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

/* Copies a 30x30 2-dimensional array(arr) to the passed vector(dynVec). Starts copying
 * with the first element of the first list and continues accordingly.
 */
void copyStaticToDyn(int arr[30][30], vector<int>& dynVec) {
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
			dynVec.push_back(arr[j][i]);
        }
    }
}

/* Gets element at x,y of a vector, as if every 30 elements of the vector were a new row in a 30x30 matrix.
 */
int returnElem(vector<int> vec, int x, int y) {
	return vec[x + y * 30];
}

/* Fills a 30x30 2-dimensional array(arr) with pseudo-random numbers choosing from 0 to 9.
 */
void fillRand(int arr[30][30]) {
    srand(time(0));
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
            arr[i][j] = rand() % 10;
        }
    }
}

/* Prints a 30x30 2-dimensional array(arr) in the console as if it was a 30x30 matrix.
 */
void printArr(int arr[30][30]) {
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
			cout << arr[j][i] << ' ';
        }
		cout << endl;
    }
}

/* Prints a vector(vec) to the console as a 30x30 matrix, assuming the vector has enough elements to fill that 30x30 matrix.
 */
void printVec(vector<int> vec) {
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
			cout << vec[j + i * 30] << ' ';
        }
		cout << endl;
    }
}

int main()
{

	// Demonstration code with implementation of a user command-line interface for executing some of the above functions at will.

	int list[30][30];
	vector<int> dynamicList;

    // Introduction
    cout << "Welcome! Available commands: random, copy, printstat, printdyn, help, quit.\n";

    // Quit variable for exiting the while-loop below.
    bool quit = false;
    string userInput = "";
    bool created = false;  // variable is true when a static array has been created
    bool copied = false; // variable is true when the current static array has been copied

    // Main loop of the game.
    while (quit == false) {;
		cout << "Type 'help' for information on available commands.\n";
        cout << ">>> ";
		cin >> userInput;

		if (userInput == "help") {
            cout << "\nrandom: Give the static array new random numbers for each of its cells.\n";
			cout << "copy: Copy the cells from the static array to the vector.\n";
			cout << "printstat: Print the static array to the console as a matrix.\n";
			cout << "printdyn: Print the vector to the console as a matrix.\n";
			cout << "help: Show list of available commands.\n";
            cout << "quit: Terminate the program.\n\n";
		}
		else if (userInput == "random") {
			fillRand(list);
            created = true;
            cout << "You have updated the static array.\n";
            /* We assumed that once an dynamic list has been created, it can be printet no matter if the static array has been changed.
             * If you want to change that, you only have to active the code below:
             * copied = false;
             */
		}
		else if (userInput == "copy") {
            if (created == true){
                copyStaticToDyn(list, dynamicList);
                cout << "You have copied the static array into the vector.\n";
                copied = true;
            }
            else{
                cout << "Static array does not exist yet. Type in 'random' to create a random array.\n";
            }

		}
		else if (userInput == "printstat") {
            if (created == true) {
                printArr(list);
            }
            else {
                cout << "Static array does not exist yet. Type in 'random' to create a random array.\n";
            }
		}
		else if (userInput == "printdyn") {
            if (copied == true){
                printVec(dynamicList);
            }
            else {
                cout << "Dynamic array does not exist yet. Type in 'copy' to copy the cells from the static array to the vector.\n";
            }
		}
		else if (userInput == "quit") {
			quit = true;
		}
        else {
            cout << "This is not a valid command!\n";
        }
	}

	return 0;
}
