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
char *reverseString(char[], int);
void printString(char[], int);
int getSize(char[]);

//main driver
int main(int argc, char** argv) {
	//local declarations
	int size = 5;
	char *p;
	char myStr[size] = {'H','e','l','l','o'}; //Note: if not given size, then getting it would be O(n).
	
	//Initial str
	cout << "Initial: ";
	printString(myStr, size);

	//reverse Str
	cout << "Reverse: ";
	p = reverseString(myStr, size);
	cout << p[0] << endl;
}

//Functions implementations goes below
//ReverseString will take in a char sequence and reverse it
char *reverseString(char myString[], int size) {
	static char rww[1] = {'B'};
	return rww;
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