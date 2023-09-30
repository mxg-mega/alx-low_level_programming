#include <stdio.h>
#include "main.h"

/**
  * factorial - calculate the factiorial of an int
  * @n: the integer
  * Return: factorial of the integer
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
