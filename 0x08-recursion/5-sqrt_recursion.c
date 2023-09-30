#include <stdio.h>
#include "main.h"

/**
  * _sqrt_recursion - returns the square of an integer
  * @n: integer
  * Return: the square of integer
*/
int _sqrt_recursion(int n)
{
	int start, end;

	if (n < 0)
	{
        	return (-1);
    	}

	if (n == 0 || n == 1)
	{
        	return (n);
    	}

	start = 0;
	end = n;
	while (start <= end)
	{
        	int mid, sqr;

		mid = start + (end - start) / 2;
		sqr = mid * mid;
        	if (sqr == n)
		{
            		return (mid);
        	}

	        if (sqr < n)
		{
        	    start = mid + 1;
	        }
		else
		{
	            end = mid - 1;
        	}
    	}
    	return (-1);
}
