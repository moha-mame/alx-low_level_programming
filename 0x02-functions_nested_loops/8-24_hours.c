#include "main.h"

/**
 *jack_bauer - prints every minute of the day of Jack Bauer
 *starting from 00:00 to 23:59
 */
void jack_bauer(void)
{

	int i, j;

	i = 48;
	for (; i < 24 ; i++)
	{
	j = 0;
	for (; j < 60 ; j++)
	{
		_putchar((i / 10) + i);
		_putchar((i % 10) + i);
		_putchar(':');
		_putchar((j / 10) + i);
		_putchar((j % 10) + i);
		_putchar('\n');
	}
	}
}
