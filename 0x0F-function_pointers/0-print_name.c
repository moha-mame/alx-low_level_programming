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
	if (f != NULL)
		f(name);

}
