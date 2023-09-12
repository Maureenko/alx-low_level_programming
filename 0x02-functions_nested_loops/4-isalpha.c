#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 if c is a letter, otherwise is 0
 */
int _isalpha(int c)
{
	int i;

	for (i = 0; i <= 127; i++)
	{
	if (c >= 'A' && c <= 'z')
	return (1);
	else
	return (0);
	}
	return (0);
}
