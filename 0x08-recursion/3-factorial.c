#include "main.h"

/**
 * factorial - return factorial
 * @n: number to be factorialised
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
