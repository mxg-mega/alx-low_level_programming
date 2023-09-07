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
	i = 0;
	while (i < size)
	{
		rtn = cmp(array[i]);
		if (i == (size - 1))
		{
			func_rtn = -1;
			break;
		}
		else
		{
			func_rtn = i;
			break;
		}
		i++;
	}
	return (func_rtn);
}

