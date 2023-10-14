#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - function that prints a name
  * @name: String
  * @f: function pointer
  * Return: no return
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
