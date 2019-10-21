// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>
#include <random>

using namespace std;

void copyStaticToDyn(int arr[30][30], vector<int>& dynVec) {
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
			dynVec.push_back(arr[j][i]);
		};
	};
};

int returnElem(vector<int> vec, int x, int y) {
	"Gets element at x,y of a vector, as if every 30 elements of the vector were a new column in a matrix";
	return vec[x + y * 30];
};

void fillRand(int arr[30][30]) {
	random_device rd;
	uniform_int_distribution<int> dist(0, 9);
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
			arr[i][j] = dist(rd);
		};
	};
};

void printArr(int arr[30][30]) {
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
			cout << arr[j][i] << ',';
		};
		cout << endl;
	};
}

void printVec(vector<int> vec) {
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
			cout << vec[j + i * 30] << ',';
		};
		cout << endl;
	};
}

int main()
{
	int list[30][30];
	vector<int> dynamicList;

	bool quit = false;
	string userInput = "";


	while (quit == false) {
		cout << "Type 'help' for information on available commands.\n";
		cout << ">>>";
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
		}
		else if (userInput == "copy") {
			copyStaticToDyn(list, dynamicList);
		}
		else if (userInput == "printstat") {
			printArr(list);
		}
		else if (userInput == "printdyn") {
			printVec(dynamicList);
		}
		else if (userInput == "quit") {
			quit = true;
		}
	}

	// Prints out  list as a matrix using range-based- for-loop.
	/*for (auto &row : list) {
		for (auto &col : row) {
			cout << col << ',';
		};
		cout << endl;
	};*/

	return 0;
}
