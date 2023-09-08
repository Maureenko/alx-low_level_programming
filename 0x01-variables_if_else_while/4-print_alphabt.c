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

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c == 'q' || c == 'e')
	continue;
	putchar(c);
	}
	putchar ('\n');
	return (0);
}
