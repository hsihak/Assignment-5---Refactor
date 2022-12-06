/* Assignment 5 Refactor - Question 1 */

// implementation of Midtier library for Program 1

// PROG71985 - F22
// Hangsihak S - November 24, 2022

#include "Midtier.h"
#include "Stack.h"

void ReverseString(STACK* stack ,char* inputBuffer)
{
	int i = 0;
	while (inputBuffer[i] != '\0')
		push(stack, inputBuffer[i++]);
}

void DisplayString(STACK* stack, char* inputBuffer)
{
	char ch;
	while (ch = pop(stack))
		printf("%c", ch);
}