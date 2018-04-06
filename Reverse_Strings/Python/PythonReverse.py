#
#Kevin Nguyen
#Basic Shell for Python.
#
#How to run (linux):
#	1.) open command line and cd into directory folder of where this code is
#	2.) type in "python Python-Shell.py"

#import statements
import sys;
import array;


#TODO: perform reverse strings!

#function implementation/definition below
#Reverse function will take an input string and reverse the characters for output
def Reverse(myString):
	#local declarations	
	length = len(myString)
	result = "";
	#loop through every character in reverse and append to result string
	while(length > -1):
		result = result + myString[length];
		length=length-1;
	print result;


#main driver below
myString = "Hello World";
myReverseString = Reverse(myString);

