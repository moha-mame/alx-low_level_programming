#include <stdio.h>

/**
 * main - program that prints all possible combinations of
 * two two-digit
 * The numbers should range from 0 to 99
 * Numbers must be separated by ,followed by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * Return: 0
 */

int main(void)
{
	int i = 48;
	int j = 0;
	int k;
	int com = 44;

	while (j <= 99)
	{
		k = j + 1;
	while (k <= 99)
	{
		putchar((j / 10) + i);
	putchar((j % 10) + i);
	putchar(32);
	putchar((k / 10) + i);
	putchar((k % 10) + i);
	if (j != 98 || k != 99)
	{
		putchar(com);
		putchar(32);
	}
	k += 1;
}
j += 1;
}
putchar('\n');
return (0);
}
