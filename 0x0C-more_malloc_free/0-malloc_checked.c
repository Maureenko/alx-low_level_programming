#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b: size of memory to be allocated
 *
 * Return: pointer to allocated memory on success,
 * termination with status value 98 on fail
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	else
		return (p);
}
