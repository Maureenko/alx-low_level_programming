#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: destination
 * @s2: source
 * @i: size
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	p = malloc(sizeof(char) * (len1 + n) + 1);
	if (p == NULL)
		return (NULL);
	if (n >= len2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			p[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			p[len1 + i] = s2[i];
		p[len1 + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			p[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			p[len1 + i] = s2[i];
		p[len1 + i] =  '\0';
	}
	return (p);
}
