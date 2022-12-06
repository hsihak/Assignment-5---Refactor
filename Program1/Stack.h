#pragma once

/* Assignment 5 Refactor - Question 1 */

// PROG71985 - F22
// Hangsihak S - November 24, 2022

// Header file for Stack Library of Program 1

#include <stdio.h>
#include <stdbool.h>
#define MAXSTRLEN 1000

typedef struct stack
{
	int top;
	char array[MAXSTRLEN];
}STACK;

STACK* createStack();

void push(STACK*, char);

char pop(STACK*);

bool isEmpty(STACK*);

void disposeStack(STACK*);