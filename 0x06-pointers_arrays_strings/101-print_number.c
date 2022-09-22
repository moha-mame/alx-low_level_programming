#include "main.h"
#include <stdlib.h>
 #include <stdio.h>

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}
	if (n == 0)
	_putchar('0');
	if (n / 10)
	print_number(n / 10);
	_putchar(n % 10 + '0');
}
