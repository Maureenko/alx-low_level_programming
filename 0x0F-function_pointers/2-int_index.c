#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: array to be evaluated
  * @size: size of array
  * @cmp: pointer to function to compare values
  *
  * Return: index of first element or -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
