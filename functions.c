#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <errno.h>
#include "functions.h"
void error_empty(void)
{
	printf("\nStack is empty, I can't extract some data\n");
}

void error_full(void)
{
	printf("\nStack is full, I can't add here some data\n");
}
/* 
This function creates stack with "n"
maximal elements on "A" pointer 
*/

int * create_stack(int n)
{
	return (int*)malloc(4 * n);
}

/*
This function deletes our stack
*/

int delete_stack(int *A)
{
	free(A);
	return -2;
}

/*
This function checks free place in your
stack. It returns number of free cells.
Here "N" - pointer of stack top
*/

int free_place(int N, int stack_size)
{
	return stack_size - N -1;
}

/*
This function checks fullness of stack.
It return 	1 - if no empty,
			0 - if empty. 
*/

int stack_empty(int N)
{
	if (N == -1 )
		return 0;
	else 
		return 1;
}

/*
This function extracts data
from stack top "N".
It returns extracted data 
*/

int stack_pop(int *A, int *N)
{
	if (!stack_empty(*N))
	{
		*N=*N-1;
		return A[*N+1];
	}
	else
	{
		error_empty();
	}
}

/*
This function adds data to stack top "N"
*/
void stack_push(int *A, int *N, int data)
{
	extern int stack_size;
	if (*N < stack_size)
	{
		*N++;
		A[*N] = data;
	}
	else
	{
		error_full();
	}
}
/*
It's interface
*/
void interface(void)
{
	printf("Enter 'e' for extracting data from stack\n");
	printf("Enter 'a' for adding data to stack\n");
	printf("Enter 'd' for deleteing all stack\n");
	printf("Enter 'f' for checking free place into stack\n");
	printf("Enter 'q' for exit from programm\n");
}