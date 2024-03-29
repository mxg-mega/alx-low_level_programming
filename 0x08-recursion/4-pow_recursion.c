#include <stdio.h>
#include "main.h"

/**
  * _pow_recursion - return the value of x raise to the power y
  * @x: the base
  * @y: index or power
  * Return: the result
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
