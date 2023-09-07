#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - a function that seraches for an integer
  * @array: array of integer
  * @size: size of array
  * @cmp: function pointer
  *
  * Return: Returns an integer
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, rtn, func_rtn;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		rtn = cmp(array[i]);
		if (rtn != 0)
		{
			func_rtn = i;
			break;
		}
	}
	return (func_rtn);
}

