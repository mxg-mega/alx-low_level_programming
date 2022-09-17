#include "main.h"
/**
  *_islower - function that checks if the argument is lower case
  *@c: is the int argument that is checked as an ascii if it is under the lower alphabet notaions
  *
  *Return:1 if true and 0 if false
  */
int _islower(int c)
{
	int B = 97, end = 122;

	if ((c >= B) && (c <= end))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
