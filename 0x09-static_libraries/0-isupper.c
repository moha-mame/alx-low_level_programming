#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check if paramter c represents an uppercase letter.
 * @i: Int representing a character
 * Return: Always 0.
 */
int _isupper(int i)
{
if (i >= 65 && i <= 90)
{
return (1);
}
return (0);
}
