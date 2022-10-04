#include"main.h"
#include <stdlib.h>
#include <string.h>
char * _strdup( char* src){
    char * dest = malloc( (1+strlen(src))*sizeof(char));
    char * toReturn = dest;

    while (*src){
        *dest++ = *src++;
    } 
  return toReturn;
} 
