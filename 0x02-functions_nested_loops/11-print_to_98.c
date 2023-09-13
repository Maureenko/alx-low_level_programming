#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to be evaluated
 */
void print_to_98(int n)
{
	int i;

	i = n;
	while (i <= 98)
	{
	if (n <= 98)
	{
		printf("%d", i);
		n++;
	}
	else
	{
		printf("%d", i);
		i--;
	}
	}
}
