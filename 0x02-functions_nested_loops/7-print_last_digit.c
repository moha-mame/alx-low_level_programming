#include "main.h"

/**
* print_last_digit - function that prints the last digit of a number.
* @i: The input number to check
* Return: int.
*/

int print_last_digit(int i)
{
	i %= 10;

	if (i < 0)
	i *= -1;
	_putchar(i + '0');
	return (i);
}
