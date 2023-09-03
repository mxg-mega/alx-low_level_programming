#include <stdio.h>

/**
  * print_name - contains function pointers to print a string
  * @name: string to add
  * @f: pointer to function
  *
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;	
	f(name);
}

