#include "function_pointers.h"
#include <stdio.h>

/**
  * array_iterator - executes a function given as a parameter
  * n each element of an array.
  * @array: the array
  * @size: size of array
  * @action:  is a pointer to the function you need to use
  *
  * Return: no return
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
