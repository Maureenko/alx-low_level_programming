#include "main.h"

int sqrt_recursive(int n, int a);
/**
 * _sqrt_recursion - returns natural sqrt of a number
 * @n: number to be square rooted
 *
 * Return:-1 if no has no natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursive(n, 1));
}

int sqrt_recursive(int n, int a)
{
	if (a * a == n)
		return (a);
	if (a * a > n)
		return (-1);
	return (sqrt_recursive(n, a + 1));
}
