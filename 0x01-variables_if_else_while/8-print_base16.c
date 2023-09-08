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

	for (i = 0; i <= 9; i++)
	putchar ('0' + i);
	for (c = 'a'; c <= 'f'; c++)
	putchar (c);
	putchar ('\n');
	return (0);
}
