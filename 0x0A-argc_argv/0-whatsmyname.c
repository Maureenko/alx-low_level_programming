#include <stdio.h>

/**
 * main - print own name
 * @argc: number of arguments to be passed to cl
 * @argv: value of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
