#include <stdio.h>
#include <stdlib.h>

/**
 * main - print min no of coins to make change
 * @argc: agguments count
 * @argv: arguments vector
 *
 * Return: 0 if success
 * 1 if error
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins;

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
		printf("%d\n", 0);
	while (cents > 0)
	{
		if (cents >= 25)
			cents = cents - 25;
		else if (cents >= 10)
			cents = cents - 10;
		else if (cents >= 5)
			cents = cents - 5;
		else if (cents >= 1)
			cents = cents + 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
