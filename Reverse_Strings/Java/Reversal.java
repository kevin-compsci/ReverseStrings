/*
Kevin Nguyen
Basic Java program to reverse any given string. Performance is O(n) due to looking through every character in the sequence.

How to run (linux):
	1.) open command line and cd into directory folder of where this code is
	2.) type in "javac *.java" to compile java files
	3.) type in "java Reversal"

*/

//imports
import java.io.*;
import java.util.*;

//class
class Reversal {
	//main driver
	public static void main(String[] args) {
		//Local Declarations
		String initialStr = "HelloWorld", reverseStr = "";

		//Initial results
		System.out.println("Original: " + initialStr);

		//call function to reverse string
		reverseStr = reversal(initialStr);

		//Reverse results
		System.out.println("Reverse: " + reverseStr);
	}

	//function definitions below
	//Reversal function will take in a string and returns the reverse of that string
	public static String reversal(String str) {
		//Local Declarations
		int limit = str.length()-1;
		String result = "";
		//loop through from end of string to first character
		while(limit > -1) {
			result += str.charAt(limit) + ""; //append chars to result
			limit--; //decrement
		}
		return result;
	}
}
