#include"main.h"
#include <stdlib.h>
#include <string.h>
/**
*_strdup - the string given as a parameter.
*@src: - string
*Return: - string
*/
char *_strdup(char *src)
{
	char *dest = malloc((1 + strlen(src)) * sizeof(char));
	char *toReturn = dest;

	while (*src)
	{
	*dest++ = *src++;
	}
	return (toReturn);
}
