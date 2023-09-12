#include "main.h"
/**
 * print_alphabet - alphabet in lower case followed by new line
 * Return:always 0
 */
void print_alphabet(void)
{
	int i = 'a';
	while (i <= 'z')
	{
	_putchar(i);
	i++;
	}
	_putchar('\n');
	return;
}
