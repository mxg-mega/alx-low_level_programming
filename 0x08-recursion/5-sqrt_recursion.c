#include <stdio.h>
#include "main.h"

/**
  * _sqrt_recursion - returns the square of an integer
  * @n: integer
  * Return: the square of integer
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
    		return (-1);
  	}
	else if (n == 0 || n == 1)
	{
    		return (n);
  	}
	else
	{
    		int mid = (n / 2) + (n % 2);
    		int sqrt = _sqrt_recursion(n - (mid * mid));
    		if (sqrt == -1)
		{
      			return -1;
    		}
		else
		{
      			return mid + sqrt;
    		}
  	}
}
