#include "main.h"

/**
 * print_triangle - Print triangle dependent on the parameter size.
 * @size : The height of the triangle
 * Return: Void.
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 0; i < size; i++)
	{
	for (k = size - 1 - i; k > 0; k--)
	{
	_putchar(' ');
	}
	for (j = 0; j <= i; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	if (size <= 0)
	{
	_putchar('\n');
	}
}
