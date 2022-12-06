#pragma once

/* Assignment 5 Refactor - Question 1 */

// PROG71985 - F22
// Hangsihak S - November 24, 2022

// Header file for Stack ADT Library of Program 1

#include <stdio.h>
#include <stdlib.h>															// Use for malloc() and free() methods
#include <stdbool.h>														// Use for boolean data type (true/false)
#define MAXSTRLEN 1000														// A constant used to set arrays of character (string) length

// This stack struct consists of 2 members that will be used in Stack operations
typedef struct stack
{
	int top;																// Used to keep track of the element on top of the stack
	char array[MAXSTRLEN];													// Used to store array of characters
}STACK;

STACK* createStack(void);														// A function prototype for createStruct Library

void push(STACK*, char);													// A function prototype for push Library

char pop(STACK*);															// A function prototype for pop Library

bool isEmpty(STACK*);														// A function prototype for isEmpty Library

void disposeStack(STACK*);													// A function prototype for disposeStack Library