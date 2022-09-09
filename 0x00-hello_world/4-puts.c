#include <stdio.h>

int main(void)
{
	/*the puts function is an stdout like printf , 
	 * also strings are initialized as arrays because there is no data type string*/
	char message[] = "\"Programming is like building a multilingual puzzle";

	puts(message);
	return (0);
}
