#include "main.h"

/**
  * binary_to_uint - converts binary string to decimal
  * @b: string of the binary
  *
  * Return: the value in decimal
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;

	if ((strlen(b) == 1 && b[0] == '0') || b == NULL)
	{
		result = 0;
		return (result);
	}
	result = 0;
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else if (b[i] == '0')
		{
			result = (result << 1);
		}
		i++;
	}
	return (result);
}
