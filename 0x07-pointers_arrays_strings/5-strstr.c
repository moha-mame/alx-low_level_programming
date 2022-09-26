#include "main.h"

/**
* _strstr - function locate
* @haystack: pointer to char
* @needle: pointer to char
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;

	for (; haystack[i]; i++)
	{
	j = 0;
		for (; needle[j] && (haystack[i] == needle[0]); j++)
		{
			if (haystack[i + j] == needle[j])
			j++;
			else
				break;
		}
		if (needle[j])
		{
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
