#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 * @s: character to be accessed
 */
void rev_string(char *s)
{
	int i;
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	for (i = 0; i < len / 2; i++)
	{
		char j = s[i];

		s[i] = s[len - 1 - i];
		s[len - 1 - i] = j;
	}
}
