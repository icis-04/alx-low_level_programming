#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings to a memeory space
 * @s1: first string input
 * @s2: second string input
 * @Return: returns the concatenated string(success) or NULL(failure)
 */
char *str_concat(char *s1, char *s2)
{
int f;
char *dest;
int j;
int i;
int h;
if (s1 == NULL)
{
s1 = " ";
}
if (s2 == NULL)
{
s2 = " ";
}
for (i = 0; i < s1[i]; i++)
{
;
}
i++;
for (j = 0; j < s2[j]; j++)
{
;
}
j++;
dest = malloc((sizeof(char) * i) + (sizeof(char) * j) + 1);
if (dest == NULL)
{
return (NULL);
}
h = 0;
f = 0;
while (*s1 != '\0')	
{
dest[h] = *s1;
s1++;
h++;
}
while (*s2 != '\0')
{
dest[h + f] = *s2;
s2++;
f++;
}
dest[i] = '\0';
return (dest);
}

