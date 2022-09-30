#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers.
 * @argc: number of arguments.
 * @argv: An array of pointer
 *
 * Return: If the program receives two arguments - 0.
 */
int main(int argc, char *argv[])
{
	int i = atoi(argv[1]);
	int j = atoi(argv[2]);
	int prod = i * j;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", prod);

	return (0);
}
