#include "main.h"
/**
  *jack_bauer - a function to print every minute of the day
  *
  *Return: no return
  */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remaining;
	int mins_remaining;
	/*using a while loop to check every minute*/
	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			hours_remaining = hours % 10;
			mins_remaining = minutes % 10;
			/*the hour part*/
			_putchar(hours / 10 + '0');
			_putchar(hours_remaining + '0');
			_putchar(':');
			/*the minute part*/
			_putchar(minutes / 10 + '0');
			_putchar(mins_remaining + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
