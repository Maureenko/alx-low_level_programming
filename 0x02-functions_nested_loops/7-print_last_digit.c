#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @z: number to be evaluated
 *
 * Return: value of last digit
 */
int print_last_digit(int z)
{
	int res;

	res = z % 10;
	if (z < 0)
	res = -res;
	_putchar (res + '0');
	return (res);
}
