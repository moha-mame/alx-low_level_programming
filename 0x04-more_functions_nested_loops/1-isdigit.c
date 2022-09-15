#include "main.h"
/**
 * _isdigit - Check for a digit (0-9)
 * @i: Integer holding the character
 *
 * Return: 1- Digit 0- Not
 */

int _isdigit(int i)
{
		if (i >= 48 && i <= 57)
		return (1);
		return (0);
}
