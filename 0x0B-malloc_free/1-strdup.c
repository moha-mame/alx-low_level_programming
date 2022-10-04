#include"main.h"
#include <stdlib.h>
#include <string.h>
/**
*_strdup - the string given as a parameter.
*@srt: - string
*Return: - string
*/
char *_strdup(char *str)
{
     char* copy = NULL;
 
     if(str)
     {
         size_t len = strlen(str) + 1;
 
         if((copy = malloc(len)) == NULL)
         {
             return (NULL);
         }
 
         memcpy(copy, str, len);
     }
 
     return (copy);
 }


