#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase,
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
	int lwc = 97;

	int upc = 65;

	while (lwc <= 122)
	{
		putchar(lwc);
		lwc += 1;
	}
	while (upc <= 90)
	{
		putchar(upc);
		upc += 1;
	}
	putchar('\n');
	return (0);
}
