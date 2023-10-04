#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to new duplicate string
 * @str: string to be duplicated
 *
 * Return: NULL if str === NULL
 */
char *_strdup(char *str)
{
	char *p;
	int i, len;

	len = 0;
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	p = malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
		p[i] = str[i];
	return (p);
}
