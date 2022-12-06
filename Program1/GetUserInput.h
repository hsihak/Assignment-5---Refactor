#pragma once

/* Assignment 5 Refactor - Question 1 */

// PROG71985 - F22
// Hangsihak S - November 24, 2022

// Header file for GetUserInput Library of Program 1

#define MAXSTRLEN 1000										// A constant used to set arrays of character (string) length
#include <stdio.h>
#include <stdlib.h>											
#include <string.h>											// Use for strlen() method

void GetUserInput(char*, const char*);						// A function for GetUserInput Library