#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
*_strncat - this function adds/concatenates strings with out spacing
*@dest: string to add to
*@src: string to add
*@n: number of string element to copy
*/
char *_strncat(char *dest, char *src, int n)
{
	return strncat(dest, src, n);
}
