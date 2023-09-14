#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: no of times / should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (n > 0 && n != 0)
			{
				if (j == i)
					_putchar('\\');
				else
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
