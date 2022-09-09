#include <stdio.h>
/**
 * main -  program that prints all possible combinations of single-digit
 * Numbers must be separated by  space
 * Numbers should be printed in ascending order
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
	int i = 48;
	int com = 44;
	int sp = 32;

	for ( ; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(com);
			putchar(sp);
		}
	}
	putchar('\n');
	return (0);
}
