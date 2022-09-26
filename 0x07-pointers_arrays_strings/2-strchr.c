#include "main.h"
/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: first occurrence of the character.
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
	if (*s == c)
	return (s);
	if (!*s)
	return (NULL);
	}
}
