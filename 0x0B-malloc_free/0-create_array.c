#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array - this funtion creates an array
*@size: size of the array to be created
*@c: the
*Return: a pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	if(size == 0)
	{
		return NULL;
	} 
	else
	{
		str = malloc(sizeof(char) * size);
		return str;
	}
}
