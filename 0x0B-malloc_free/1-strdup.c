#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate a string to a memory location 
 * @str: input string to be duplicated
 * Return: returns duplicated string
 */
char *_strdup(char *str)
{
char *dup;
int j;
int i;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
;
}
i++;
dup = malloc(sizeof(char) * i);
for (j = 0; j < i; j++)
{
dup[j] = str[j];
if (dup == NULL)
{
return (NULL);
}
}
return (dup);
}
