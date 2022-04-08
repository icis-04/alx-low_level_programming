#include "main.h"
#include <stdio.h>
/**
 * string_nconcat - concatenates with s1 with n bytes of s2
 * @s1: first input
 * @s2: second input
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i = n, index;
char *rest;
if ((s2 == NULL) || (s1 == NULL))
{
s1 = "";
s2 = "";
}
for (index = 0; s1[index]; index++)
{
i++;
}
i++;
rest = malloc(sizeof(char) * (i +1));
if (rest == NULL)
{
return (NULL);
}
i = 0;
for (index = 0; s1[index]; index++)
{
rest[i++] = s1[index];
}
for (index = 0; s2[index] && index < n; index++)
{
rest[i++] = s2[index];
}
rest[i] = '\0';
return (rest);
}
