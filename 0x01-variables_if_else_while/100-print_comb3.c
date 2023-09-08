#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
	for (j = i + 1; j < 10; j++)
	{
	putchar((i % 10) + '0');
	putchar((j % 10) + '0');
	if (i != 8 || j != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

