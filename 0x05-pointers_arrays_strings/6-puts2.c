#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character
 * @str: character to be printed
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i != str['\0']; i = i + 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
