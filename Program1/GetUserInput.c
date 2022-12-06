/* Assignment 5 Refactor - Question 1 */

// implementation of GetUserInput library for Program 1

// PROG71985 - F22
// Hangsihak S - November 24, 2022

#include "GetUserInput.h"											// A function prototype for GetUserInput Library
#include "StringUtils.h"											// A function prototype for StringUtils Library


// A function that prompt user for input in string and pass back the value by reference
void GetUserInput(char* userInput, const char* message)
{
	printf("%s ", message);									// Print Enter a string message for user to know what to do

	// Get user Input with fgets
	fgets(userInput, MAXSTRLEN, stdin);		// Prompt user for input in string

	CleanNewLineFromString(userInput);								// iterate through the string until it encounters a newline character and replace it with a null terminator
}