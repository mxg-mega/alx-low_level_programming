#include "main.h"
/**
*_strcat -> this is a funcion strcat
*@dest: first param
*@src: second param
*Return: a string
*/
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
	{
		len++;
	}
	i = 0;

	while (src[i] != 0)
	{
		dest[len] = src[i]
		len += 1;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
