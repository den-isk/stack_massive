#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <errno.h>
#include "functions.h"
int stack_size = 0; /* stack full size */
int main()
{
	int *A; /* Stack - massive pointer */
	int N = -1; /* stack top pointer */
	int opt; /* switch options */
	int ext_data, add_data; /* extracting and adding data */
	printf("Please, enter stack size : ");
	scanf("%d", &stack_size);
	A = create_stack(stack_size);
	printf("\n");
	while(1)
	{
		interface();
		opt = getchar();
		switch(opt)
		{
			case 'e': ext_data = stack_pop(A,&N); break;
			case 'a': 	printf("Enter adding data:\n");
						scanf("%d", &add_data);
						stack_push(A, &N, add_data);
						break;
			case 'd': N = delete_stack(A); break;
			case 'f': 	printf("Free place in stack: %d\n", free_place(N, stack_size));
						break;
			case 'q': if(N != -2)
						printf("Please, make free stack\n");
					 else
					 	exit(1);
						break;
		}
	}
return 0;
}