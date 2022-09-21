#include "main.h"
#include<string.h>
/**
 * _strcmp -  function that compares two strings.
 * @s1: primera cadena.
 * @s2: segunda cadena.
 * Return: 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i,c=0;

	if(strlen(s1)==strlen(s2))
    {
    	for(i=0;s2[i];i++)  
        {
        	if(s1[i]==s2[i])
        	 c++;
 	}
 	    if(c==i)
          return 1;
    }
    return 0;
}

