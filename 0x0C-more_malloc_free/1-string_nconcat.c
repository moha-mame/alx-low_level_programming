#include <stdlib.h>
#include "main.h"
char *string_nconcat (char *s1, char *s2, unsigned int n)
{

  unsigned int i, j, x, y, z;
  char *p;

  if (s1 == NULL)
    s1 = "";

  if (s2 == NULL)
    s2 = "";

  for (i = 0; s1[i] != '\0'; i++)
    ;

  for (j = 0; s2[j] != '\0'; j++)
    ;
  if (n > j)
    n = j;

  x = i + n;

  p = malloc ((x + 1));

  if (p == NULL)
    return (NULL);

  for (x = 0; x < i; x++)
    p[x] = s1[x];

  for (y = i, z = 0; y < i + n; y++, z++)
    p[y] = s2[z];

  p[i + j] = '\0';

  return (p);
}
