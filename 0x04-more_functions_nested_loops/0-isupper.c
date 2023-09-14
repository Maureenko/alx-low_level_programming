#include "main.h"

 /**
  * _isupper - check for uppercase characters
  * @c: Character to be checked
  *
  * Return: 1 if @c is uppercase, 0 otherwise
  */
int _isupper(int c)
{
	int i;

	for (i = 0; i < 128; i++)
	{
		if (c >= 65 && c <= 90)
			return (1);
		else
			return (0);
	}
	return (0);
}
