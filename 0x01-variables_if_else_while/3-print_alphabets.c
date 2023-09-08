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

	for (c = 'a'; c <='z'; c++)	{
	putchar (c);	}
	for (c = 'A'; c <= 'Z'; c++)
	putchar (c);
	putchar ('\n');
	return (0);
}
