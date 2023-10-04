#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: address of destination
 * @s2: address of string to add
 *
 * Return: NULL on failure,
 * always 0
 */
char *str_concat(char *s1, char *s2)
{
	char *np;
	int i;
	int len1 = 0;
	int len2 = 0;
	int tlen;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	tlen = len1 + len2;
	np = malloc (sizeof(char) * (tlen) + 1);
	strcpy(np, s1);
	strcat(np, s2);
	return (np);
}
