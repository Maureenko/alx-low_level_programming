#include <stdio.h>

/**
 * main - all codes here
 *
 * Return: after execution returns 0
 *
 */
int main(void)
{
	char c;

	c = 'A';
	if (c >= 'a' && c <= 'z')
	{
	putchar (c);
	c++;
	}
	else if (c >= 'A' && c <= 'Z')
	{
	putchar (c);
	c++;
	}
	putchar ('\n');
	return (0);
}
