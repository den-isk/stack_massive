#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "functions.h"
int * create_stack(int);
int delete_stack(int *);
int free_place(int, int);
int stack_empty(int);
void stack_push(int *, int *, int);
int stack_pop(int *, int *);
//int stack_size(int );
void interface(void);
#endif