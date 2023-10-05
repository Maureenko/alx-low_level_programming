#include "main.h"

/**
 * _strlen - return length of string
 * @s: string t be evaluated
 *
 * Return: always 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
