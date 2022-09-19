#include "main.h"
#include <string.h>
/**
*_strcpy - copies the string pointed to by src, including \0.
*@src: pointer.
*@dest: pointer.
*Return: the pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	int i, n;
	for (n = 0; src[n] != '\0'; n++)
	{
	}
	for (i = 0; i <= n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
