#include "main.h"
#include<string.h>
/**
 *rev_string -  string in reverse.
 *
 *@s: the string to print in reverse.
 *
 */

void rev_string(char *s)
{
char rev[500];

	int i;
	int len;

	len = strlen(s) - 1;
	strcpy(rev, s);
	for (i = len; i >= 0; i--)
	{
	rev[len - i] = s[i];
	}
	strcpy(s, rev);
}
