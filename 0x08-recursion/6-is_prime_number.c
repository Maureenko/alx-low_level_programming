#include "main.h"

int is_prime(int n, int d);
/**
 * is_prime_number - returns value if prime number
 * @n: digit to be evaluated
 *
 * Return: 1 if prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
/**
 * is_prime - finds divisors
 * @n: number to be evaluated
 * @d: possible divisor
 *
 * Return: 1 or 0
 */
int is_prime(int n, int d)
{
	if (n == d)
		return (1);
	if (n % d == 0)
		return (0);
	return (is_prime(n, d + 1));
}
