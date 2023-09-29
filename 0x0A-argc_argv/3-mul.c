#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 munbers
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return:0 if success
 * 1 if argc is not 2
 */
int main(int argc, char *argv[])
{
	int a, b, mul = 0;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	else
		printf("%d\n", mul);
	return (0);
}
