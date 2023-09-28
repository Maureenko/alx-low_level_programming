#include "main.h"

/**
 * _pow_recursion - returns value of x raised to y
 * @x: base value
 * @y:power value
 *
 * Return: always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
