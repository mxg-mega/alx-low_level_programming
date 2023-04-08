#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*malloc_checked - this function allocates a memory and return a pointer to it
*@b: amount of memory to allocate
*
*Return: 98 on fail and pointer if success
*/
void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(b);
	if (alloc == NULL)
	{
		exit(98);
	}
	else
	{
		return (alloc);
	}
}
