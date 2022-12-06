/* Assignment 5 Refactor - Question 1 */

// implementation of Midtier library for Program 1

// PROG71985 - F22
// Hangsihak S - November 24, 2022

#include "Midtier.h"														// Header file for Midtier Library
#include "Stack.h"															// Header file for Stack Library
#include "StringUtils.h"

void ReverseString(STACK* stack , char* inputBuffer)
{
	int i = 0;
	while (inputBuffer[i] != NULLTERMINATOR)
		push(stack, inputBuffer[i++]);
}

void DisplayString(STACK* stack)
{
	char ch;
	while (ch = pop(stack))
		printf("%c", ch);
}