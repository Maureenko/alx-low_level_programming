#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array and initialize
 * @size: size of the array
 * @c: character to initialize with
 *
 * Return: NULL if size = 0,
 * pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = (char *)malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	else if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
