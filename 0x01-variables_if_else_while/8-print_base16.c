#include <stdio.h>

/**
 *main - program that prints all the numbers of base 16 in lowercase.
 *You can only use the putchar function
 *Return:0
 */


int main(void)
{
	int i;

	int j;

	for (i = 48; i <= 57; i++)
	{
		putchar (i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar (j);
	}
	putchar('\n');
	return (0);
}
