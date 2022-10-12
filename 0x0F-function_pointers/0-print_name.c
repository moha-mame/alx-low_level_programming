#include "function_pointers.h"
#include<stdlib.h>
/**
 * print_name - prints a name
 * @name: name
 * @f: pointer
 * Return: ....
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
		f(name);

}
