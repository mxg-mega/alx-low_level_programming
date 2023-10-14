#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - function search for an integer
  * @array: the array
  * @size: size of array
  * @cmp: function to execute
  *
  * Return: the searched integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
