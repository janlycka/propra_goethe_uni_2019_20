// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>
#include <random>

using namespace std;

void copyStaticToDyn(int arr[30][30], vector<int>& dynVec) {
	"Copies a 30x30 2-dimensional array(arr) to the passed vector(dynVec). Starts copying with the first element of the first list and continues accordingly.";
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
			dynVec.push_back(arr[j][i]);
        }
    }
}

int returnElem(vector<int> vec, int x, int y) {
	"Gets element at x,y of a vector, as if every 30 elements of the vector were a new row in a 30x30 matrix";
	return vec[x + y * 30];
}

void fillRand(int arr[30][30]) {
    "Fills a 30x30 2-dimensional array(arr) with pseudo-random numbers choosing from 0 to 9.";
	random_device rd;
	uniform_int_distribution<int> dist(0, 9);
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
			arr[i][j] = dist(rd);
        }
    }
}

void printArr(int arr[30][30]) {
		"Prints a 30x30 2-dimensional array(arr) in the console as if it were a 30x30 matrix.";
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
			cout << arr[j][i] << ' ';
        }
		cout << endl;
    }
}

void printVec(vector<int> vec) {
    "Prints a vector(vec) to the console as a 30x30 matrix, assuming the vector has enough elements to fill that 30x30 matrix.";
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
    // SOLVED -> !WARNING! Executing some of the functions in an unintended sequence may result in an error. Example: Attempting to print the vector before copying the array[30][30] to the vector will result in an error.

	int list[30][30];
	vector<int> dynamicList;

    // Introduction
    cout << "Welcome! Available commands: random, copy, printstat, printdyn, help, quit.\n";

    // Quit variable for exiting the while-loop below.
    bool quit = false;
    string userInput = "";
    bool created = false;
    bool copied = false;

    while (quit == false) {;
		cout << "Type 'help' for information on available commands.\n";
        cout << ">>> ";
		cin >> userInput;
		if (userInput == "help") {
			cout << "random: Give the static array new random numbers for each of its cells.\n";
			cout << "copy: Copy the cells from the static array to the vector.\n";
			cout << "printstat: Print the static array to the console as a matrix.\n";
			cout << "printdyn: Print the vector to the console as a matrix.\n";
			cout << "help: Show list of available commands.\n";
            cout << "quit: Terminate the program.\n";
		}
		else if (userInput == "random") {
			fillRand(list);
            cout << "You have updated the static array.\n";
            copied = false;
            created = true;
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
