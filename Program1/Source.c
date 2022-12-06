/* Assignment 5 Refactor - Program 1 */

// PROG71985 - F22
// Hangsihak S - November 24, 2022

/**********************************************************************************************************************************************
	Specification
	The stack is another data form from the list family. In a stack, additions and deletions can be made from only one end of the list. Items are said to be “pushed onto” the top of the stack and to be “popped off” the stack. Therefore, the stack is a LIFO structure (that is, last in, first out).

	a) Devise an ADT for a stack.

	b) Devise a C programming interface for a stack, i.e., a stack.h header file. Your stack should not arbitrarily add constraints (ie: max depth of stack).

	c) Write a program that lets you input a string. The program then should push the characters of the string onto a stack, one by one, and then pop the characters from the stack and display them. This results in displaying the string in reverse order.

	The deliverables for a) and b) will be baked into the delivery of c). Your design and interface implementation will present themselves in your code and be evaluated using the same categories as your code. As such, nothing specific is required for ’a.’ and ’b.’.
//*********************************************************************************************************************************************
*/

// Previous Feedback

/*
	Final: 17.00/20.00 - 85.00%

	Question 1: Create and use a stack
		o Specifications: 8.0/8.0 (The program works and meets all of the specifications.)
		o Readability: 4.0/4.0 (The code is exceptionally well organized and very easy to follow.)
		o Reusability: 1.0/4.0 (The code is not organized for reusability or the following issues were noted:)
			 —Stack operations not generic (see https://www.tutorialspoint.com/data_structures_algorithms/stack_algorithm.htm )
			 —ADT has more than 1 responsibility (stack + user I/O)
		o Documentation: 4.0/4.0 (The documentation is well written and clearly explains what the code is accomplishing and how.)
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include "Midtier.h"
#include "GetUserInput.h"

int main(void)
{
	STACK* stack = createStack();

	char inputBuffer[MAXSTRLEN];

	GetUserInput(inputBuffer, "Please Enter a word: ");

	printf("Before Reversing the String: %s", inputBuffer);

	ReverseString(stack, inputBuffer);

	printf("\nAfter Reversing the String:  ");

	DisplayString(stack, inputBuffer);

	//int i = 0;
	//while (inputBuffer[i] != '\0')
	//	push(stack, inputBuffer[i++]);

	//char ch;
	//while (ch = pop(stack))
	//	printf("%c", ch);

	printf("\n");

	disposeStack(stack);

	return 0;
}