#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers.
 * @argc: number of arguments.
 * @argv: An array of pointer
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, j, prod;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	prod = i * j;
	printf("%d\n", prod);

	return (0);
}
