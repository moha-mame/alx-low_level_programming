#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase exept e and q
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
	int lwc = 97;

	while (lwc <= 122)
	{
		if (lwc == 'e' || lwc == 'q')
		{
			lwc += 1;
		}
		else
		{
			putchar(lwc);
			lwc += 1;
		}
	}
	putchar('\n');
	return (0);
}
