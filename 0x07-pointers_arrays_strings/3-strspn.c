#include "main.h"
/**
 * strspn - counts the number of bytes of astring in another string.
 * @s: initial string.
 * @accept: bytes you checking for.
 * Return: number of integers that tally.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
break;
}
}
if (s[i] != accept[j])
break;
}
return (i);
}



