#include <stdio.h>

/**
  * print_name - contains function pointers to print a string
  *
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	char *str_ptr;
	void (*func_ptr)(char *) = f;

	str_ptr = name;
	func_ptr(str_ptr);
}

