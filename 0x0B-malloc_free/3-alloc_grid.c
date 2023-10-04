#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns pinter to 2D array of integers
 * @width: dimensions
 * @height: dimensions
 *
 * Return: NULL on failure,or if height/width = 0
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			free(p);
			for (j = 0; j <= height; j++)
				free(p[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
