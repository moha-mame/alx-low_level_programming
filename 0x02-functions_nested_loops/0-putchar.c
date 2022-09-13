#include "main.h"
/**
 * main - program that prints _putchar.
 *
 * Return: 0
 */

int main(void)
{
int c = 0;

char strg[] = "_putchar";
for (; c < 8; c++)
{
_putchar(strg[c]);
}

_putchar ('\n');
return (0);
}
