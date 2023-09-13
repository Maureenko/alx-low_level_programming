#include "main.h"

/**
 * jack_bauer - print every minute of the day
 */
void jack_bauer(void)
{
	float hour, min;

	hour = 0;
	while (hour < 24)
	{
	min = 0;
	while (min < 60)
	{
	_putchar(min);
	_putchar('\n');
	min++;
	}
	_putchar(hour ':');
	hour++;
	}
}
