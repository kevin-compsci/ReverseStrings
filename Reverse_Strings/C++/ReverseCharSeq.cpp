//Kevin Nguyen
//Basic C++ (Cpp) program that reverses a given char sequence.

/*
How to run (linux):
	1.) open command line and cd into directory folder of where this code is
	2.) type in "g++ *.cpp" to compile c++ files
	3.) type in "a.out" to run out file
*/

//TODO: implement reverse strings

//include statements
#include <cstdlib>
#include <iostream>
using namespace std;

//function definitions
void reverseString();
void printString(char[], int);

//main driver
int main(int argc, char** argv) {
	//local declarations
	int size = 5;
	char myStr[size] = {'H','e','l','l','o'}; //Note: if not given size, then getting it would be O(n).
	cout << "Initial: ";
	printString(myStr, size);
	//TODO: call verse string function here then call print strings to show result
}

//Functions implementations goes below
//ReverseString will take in a char sequence and reverse it
void reverseString() {
	//TODO: implement this function
}

//Printstring function will go through the entire char array and print out each item
void printString(char myString[], int size) {
	//Local Declarations
	int i = 0;

	//loop through every element in array and print it out
	while(i < size) {
		cout << myString[i];
		i++;
	}
	cout << endl;
}