#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = calloc(nmemb, size);
	if (p == NULL)
		return (NULL);
	else
		memset(p, 0, nmemb * size);
	return (p);
}
