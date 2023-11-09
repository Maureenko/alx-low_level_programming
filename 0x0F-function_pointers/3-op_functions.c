#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - get sum of a and b
  * @a: first value
  * @b: second value
  *
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - get subtraction
  * @a: first value
  * @b: second value
  *
  * Return: subtraction
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiply a and b
  * @a: first value
  * @b: second value
  *
  * Return: multiplication
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divide a by b
  * @a: numerator
  * @b: denomenator
  *
  * Return: division
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - get remainder from a/b
  * @a: numerator
  * @b: denomenator
  *
  * Return: remainder
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
