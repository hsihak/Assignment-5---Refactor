/* Assignment 5 Refactor - Question 1 */

// implementation of Stack library for Program 1

// PROG71985 - F22
// Hangsihak S - November 24, 2022

#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

STACK* createStack()
{
	STACK* stack = (STACK*)malloc(sizeof(STACK));
	if (stack == NULL)
	{
		exit(EXIT_FAILURE);
	}
	stack->top = 0;
	/*stack->capacity = stringLength;*/
	/*stack->array = (char*)malloc(stack->capacity * sizeof(char));*/
	return stack;
}

void push(STACK* stack, char inputBuffer)
{
	stack->array[++stack->top] = inputBuffer;
}


char pop(STACK* stack)
{
	if (isEmpty(stack))
		return 0;
	return stack->array[stack->top--];
}

bool isEmpty(STACK* stack)
{
	return stack->top == 0;
}

void disposeStack(STACK* stack)
{
	free(stack);
}
