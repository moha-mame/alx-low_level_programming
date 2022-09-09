#include <stdio.h>
#include <ctype.h>

/**
 *main - program that prints the alphabet in lowercases
 *You can only use the putchar
 *Return: 0
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n += 1;
	}

	putchar('\n');
	return (0);
}
