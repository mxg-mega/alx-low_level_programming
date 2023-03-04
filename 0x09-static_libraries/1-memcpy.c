#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
*_memcpy - this function copies a number of memory to destination
*@dest: teh destination array
*@src: from where to copy
*@n: number of memory to copy
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return memcpy(dest, src, n);
}
