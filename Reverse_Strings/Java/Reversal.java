/*
Kevin Nguyen
Basic Java program to reverse any given string. Performance is O(n).

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
	//Global Declarations

	//main driver
	public static void main(String[] args) {
		//Initial results
		String initialStr = "HelloWorld", reverseStr = "";
		System.out.println("Original: " + initialStr);
		//Reverse results
		reverseStr = reversal(initialStr); //call function to reverse string
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
