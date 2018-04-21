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
void reverseString(char[], int*, char[]);
void printString(char[], int);
int getSize(char[]);

//main driver
int main(int argc, char** argv) {
	//local declarations
	int size = 11;
	char myStr[size] = {'H','e','l','l','o',' ','W','o','r','l','d'}; //Note: if not given size, then getting it would be O(n).
	char revStr[size];

	//Initial string (char sequence)
	cout << "Initial: ";
	printString(myStr, size);

	//reverse string (char sequence)
	cout << "Reverse: ";
	reverseString(myStr, &size, revStr);
	printString(revStr, size);
}

//Functions implementations goes below
//ReverseString will take in a char sequence and reverse it. Returns a pointer to new array
void reverseString(char myString[], int *size, char *revStr) {
	//local declarations
	int i = 0, thisSize = *size;

	//loop through from end of array to beginning and insert it to a new result array
	while(thisSize > 0) {
		revStr[i] = myString[*size];
		thisSize--; i++;
	}
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

//getSize will get the size of the array if not given. O(n) performance (OPTIONAL USE).
int getSize(char myString[]) {
	//local declarations
	int i = 0;

	//loop through every element in array and count
	while(myString[i] != '\0') {
		i++;
	}
	return i-1; //don't include terminating char in size
}
