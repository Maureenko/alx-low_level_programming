#include "main.h"

/**
 * jack_bauer - print every minute of the day
 */
void jack_bauer(void)
{
	int hour, min;

	hour = 0;
	while (hour < 24)
	{
	_putchar(hour / 10 + '0');
        _putchar(hour % 10 + '0');
        hour++;

	min = 0;
	while (min < 60)
	{
	_putchar( ':');
	_putchar(min / 10 + '0');
	_putchar(min % 10 + '0');
	_putchar('\n');
	min++;
	}
	}
}
