#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and intitializes it
 * @size: size of the array
 * @c: initializing character
 *
 * Return: array, NULL
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
	for (i = 0; i <= size; i++)
		str[i] = c;
	return (str);
}
