#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to be evaluated
 */
void print_to_98(int n)
{
	int i;

	i = 0;
	while (i <= 98)
	{
	if (n <= 98)
	{
		n = i;
		printf("%d", i);
		n++;
	}
	else
	{
		n = i;
		printf("%d", i);
		n--;
	}
	}
}
