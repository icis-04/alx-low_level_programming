#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string
 * @s: string input
 * @accept: input to br tallied
 * Return: reutrns a pointer or NULL
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j = 0;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (*(accept + j) == s[i])
return (&(s[i]));
}
}
return (0);
}
