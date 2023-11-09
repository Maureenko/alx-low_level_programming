#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by new line
 * @separator : string to be printed between numbers
 * @n: number of integers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			int x = va_arg(args, int);

			if (i == n - 1)
				printf("%d ", x);
			else
				printf("%d, ", x);
		}
		printf("\n");
	}
	va_end(args);
}
