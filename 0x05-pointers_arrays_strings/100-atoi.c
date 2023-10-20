#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: pointer to string to be converted
 *
 * Return: always 0
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (*s)
	{
		if (*s == ' ' || *s == '\t')
		{
			s++;
			continue;
		}
		else if (*s == '-')
			sign = -sign;
		else if (*s == '+')
		{
			s++;
			continue;
		}
		if (*s >= '0' && *s <= '9')
		{
			i = 1;
			result = result * 10 + (*s - '0');
		}
		else
		{
			if (i)
				break;
		}
		s++;
	}
	return (result * sign);
}
