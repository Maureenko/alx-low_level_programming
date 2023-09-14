#include "main.h"
#include <stdio.h>

/**
 * print_times_table - rint n times table starting with 0
 * @n: number of tables to be executed
 */
void print_times_table(int n)
{
	int i, j, res;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;
			printf("%d", res);
			if(j < n)
				printf(", ");
		}
	if (n > 15 || n < 0)
		continue;
	printf("\n");
	}
}
