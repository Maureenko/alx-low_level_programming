#include "main.h"
#include <stdlib.h>

/**
 * argstostr- concatenates all arguments of program
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: pointer to new string or NULL if fail
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, k = 0;
	int len = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	p = malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	if (ac == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{	p[k] = av[i][j];
			k++;
		}
		p[k++] = '\n';
	}
	p[k] = '\0';
	return (p);
}
