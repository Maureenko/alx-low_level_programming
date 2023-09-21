#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings
 * @dest: pointer to destination of appended characters
 * @src: characters to be added
 *
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int slength = 0;
	int dlength = 0;

	for (i = 0; dest[i] != '\0'; i++)
		dlength++;
	for (i = 0; src[i] != '\0'; i++)
		slength++;
	for (i = 0; i<= slength; i++)
		dest[dlength + i] = src[i];
	return (dest);
}
