#include <stdio.h>

/**
 * main - program that prints all single digit numbers
 * You can only use the putchar function
 *
 * Return:0
 */

int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
	putchar(i);
}
putchar('\n');
return (0);
}
