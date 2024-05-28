#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: pointer to destination to be copied to
 * @src: pointer to string to be copied
 * @n: no of bytes to be allocated
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
