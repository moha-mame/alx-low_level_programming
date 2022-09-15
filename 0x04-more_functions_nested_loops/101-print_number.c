#include "main.h"

int _putchar(char c);

/**
 * print_number - like a hello world
 *
 * @i: an integer
 *
 * No return
 */


void print_number(int i)
{

	unsigned int j = 0;

	if  (i < 0)
	{
	j = -i;
	_putchar('-');
	}
	else
	{
	j = i;
	}
	if (j / 10)
	{
	print_number(j / 10);
	}
	_putchar((j % 10) + '0');
}
