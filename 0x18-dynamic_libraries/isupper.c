#include "main.h"

/**
 * _isupper - checks for upeercase characters
 * @c: Character to be checked
 *
 * Return: 1 if uppercase,otherwise 0;
 */
int _isupper(int c)
{
	int i;

	for (i = 0; i < 128; i++)
	{
		if (c >= 65 && c <= 90)
			return (1);
		else
			return (0);
	}
	return (0);
}
