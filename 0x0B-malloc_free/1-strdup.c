#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to memory
 * @str: string copied in memory
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int len;

	len = 0;
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
		s[i] = str[i];
	return (s);
}
