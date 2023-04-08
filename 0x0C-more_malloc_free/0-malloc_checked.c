#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/***/
void *malloc_checked(unsigned int b)
{
	void *alloc;
	void **p;

	alloc = malloc(b);
	if (alloc == NULL)
	{
		alloc[0] = 98;
		exit(98);
	}
	else
	{
		p = &alloc
		return (p);
	}
}
