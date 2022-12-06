/* Assignment 5 Refactor - Question 1 */

// implementation of StringUtils library for Program 1

// PROG71985 - F22
// Hangsihak S - November 24, 2022

#include "StringUtils.h"							// Header file for StringUtils Library

// A function that clean out newline from string which in this case when fgets is used and replace the first \n that it sees with a null terminator '\0'
void CleanNewLineFromString(char* string)
{
	// Iterate each character in a string
	for (int i = 0; i < strlen(string); i++)	// Iterate through the string until it encounter '\n' and replace it with '\0'
	{
		if (string[i] == NEWLINECHAR)				// Newline Character = '\n'
			string[i] = NULLTERMINATOR;				// Null Terminator = '\0'
	}
}