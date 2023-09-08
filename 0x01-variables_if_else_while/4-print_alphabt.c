#include <stdio.h>

/**
 * main - major code here
 *
 * Return: always 0
 *
 */
int main(void)
{
	char c;

	c = 'a';
	if (c != 'q' || c != 'e')
	{
	putchar(c);
	c++;
	}
	putchar ('\n');
	return (0);
}
