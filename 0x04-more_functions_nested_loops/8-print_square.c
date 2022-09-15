#include "main.h"

/**
 * print_square - Print square
 * @n : The number of lines using '#'
 * Return: Void.
 */
void print_square(int n)
{
	int x;
	int y;

	for (y = 0; y < n; y++)
	{
	for (x = 0; x < n; x++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	if (n <= 0)
	{
	_putchar('\n');
	}
}
