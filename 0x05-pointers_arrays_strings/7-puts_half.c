#include "main.h"

/**
 * puts_half - prints half a string
 * @str: pointer to string to be printed
 *
 */
void puts_half(char *str)
{
	int n;
	int i, len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len = len + 1;
	if (len % 2 == 0)
	{
		n = len / 2;
		for (i = n; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		n = (len - 1) / 2;
		for (i = n + 1; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
