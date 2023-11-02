#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to new array if success,
 * if min > max NULL, malloc fails NULL
 */
int *array_range(int min, int max)
{
	int s = 0;
	int i;
	int *p;

	if (min > max)
		return (NULL);
	s = (max - min) + 1;
	p = malloc(sizeof(int) * s);
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (p);
}
