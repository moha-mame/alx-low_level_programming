#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* str_concat - function that concatenates two strings.
* @s1: - char1
* @s2: - char2
* Return: - char
*/
char *str_concat(char *s1, char *s2)
{
	char *s3;

	if (s3 == NULL)
		return (NULL);
	s3 = malloc(strlen(s1) + strlen(s2) + 1);
		*s3 = '\0';
	strcat(s3, s1);
	strcat(s3, s2);
	return (s3);
}
