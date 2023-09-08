#include <stdio.h>
/**
 * main - main code here
 *
 * Return: always 0
 *
 */
int main(void)
{
	int i;
	char c;

	for (i = 1; i <= 16; i++)
	{
	if (i <= 10)
	putchar(i);
	else
	{
	for (c = 'a'; c <= 'f'; c++)
	putchar(c);
	}
	}
	putchar ('\n');
	return (0);
}
