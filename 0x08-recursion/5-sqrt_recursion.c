#include "main.h"

/**
 * _sqrt_recursion - find sqrt of a number
 * @n: number to evaluate
 *
 * Return: natural squareroot
 * -1 if no natureal square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	int recurcive(int n, int a)
	{
	if (a * a == n)
		return (a);
	if (a * a != n)
		return (-1);
	return (recursive(n, a + 1));
	}
	return (n, 1);
}
