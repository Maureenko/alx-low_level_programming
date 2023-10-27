#include "main.h"

/**
 * _islower - checks lowercase characters
 * @c: The character to be checked
 *
 * Return: is 0 if c is lowercase
 * if otherwise, return 1
 */
int _islower(int c)
{
	int i;

	for (i = 0; i <= 127; i++)
	{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
	}
	return (0);
}
