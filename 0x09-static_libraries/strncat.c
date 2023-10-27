#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: pointer to string to be appended
 * @src: pointer to string to append
 * @n: no of bytes to be used
 *
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest;
	int len_src;
	int i;

	len_dest = 0;
	len_src = 0;
	for (i = 0; dest[i] != '\0'; i++)
		len_dest++;
	for (i = 0; src[i] != '\0'; i++)
		len_src++;
	for (i = 0; i < n && src[i]; i++)
		dest[len_dest + i] = src[i];
	return (dest);
}
