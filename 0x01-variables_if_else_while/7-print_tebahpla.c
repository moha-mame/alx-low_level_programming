#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse.
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
	putchar (i);
	}
	putchar ('\n');
	return (0);
}
