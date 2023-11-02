#include "main.h"
#include <stdlib.h>

/**
 * calloc - allocate memory for array
 * @nmemb: array elements
 * @size: size of array
 *
 * Return: pointer to new allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int i = 0;
	int x = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = nmemb * size;
	p = malloc(x);
	if (p == NULL)
		return (NULL);
	while (i < x)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
