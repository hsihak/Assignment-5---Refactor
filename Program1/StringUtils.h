#pragma once

/* Assignment 5 Refactor - Question 1 */

// PROG71985 - F22
// Hangsihak S - November 24, 2022

// Header file for StringUtils Library of Program 1

#include <stdio.h>
#include <string.h>									// Use for strlen() method
#define NEWLINECHAR '\n'							// A constant for Newline Character
#define NULLTERMINATOR '\0'							// A constant for NULL TERMINATOR

void CleanNewLineFromString(char*);					// A function prototype for CleanNewLineFromString