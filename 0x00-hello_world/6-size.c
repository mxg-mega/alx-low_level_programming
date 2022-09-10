#include <stdio.h>
/**
*main - Entry point
*Return: Always 0
*Description
*	prints the data types of size 64 and 32
 */
int main(void)
{
	/*declare varibles */
	char character;
	int integer;
	long li;
	long long lli;
	float f;

	/*printing the data types for the 32 and 64 sizes using variables*/
	printf("Size of a char: %ld byte(s)\n", sizeof(character));
	printf("Size of an int: %ld byte(s)\n", sizeof(integer));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
