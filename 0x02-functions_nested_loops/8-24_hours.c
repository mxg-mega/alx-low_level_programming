#include "main.h"
/**
  *jack_bauer - a function to print every minute of the day
  *
  *Return: no return
  */
void jack_bauer(void)
{
	int counter = 0, minute, hour;
	/*using a while loop to check every minute*/
	while (counter <= 24)
	{
		minute = hour * 60;
		_putchar(minute + '0');
		counter++;
	}
}
