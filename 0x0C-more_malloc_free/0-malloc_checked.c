#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/***/
void *malloc_checked(unsigned int b)
{
	void *alloc;
	void *p;

	alloc = malloc(b);
	if (alloc == NULL)
	{
		alloc[0] = 98;
		printf("%d\n", alloc[0]);
	}
	else
	{
		p = &alloc
		printf("%p\n", p);
	}
}
