#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */
int main(void)
{
	  long int num = 612852475143;
	  long int divr;

	for (divr = 2; divr < num; divr++)
	{
	if (num % divr == 0)
	{
	num = num / divr;
	}
	}
	printf("%ld\n", divr);
	return (0);
}

