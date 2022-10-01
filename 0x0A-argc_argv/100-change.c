#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum coins to make change.
 * @argc: arguments to be passed
 * @argv: number of cents to calculate
 * Return: 0
 */

int main(int argc, char **argv)
{
	int amount, cents;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	for (amount = 0; cents > 0; amount++)
	{
		if (cents - 25 >= 0)
			cents = cents - 25;
		else if (cents - 10 >= 0)
			cents = cents - 10;
		else if (cents - 5 >= 0)
			cents = cents - 5;
		else if (cents - 2 >= 0)
			cents = cents - 2;
		else if (cents - 1 >= 0)
			cents = cents - 1;
	}
	printf("%d\n", amount);
	return (0);
}
