#include "main.h"
#include <stdlib.h>
/**
 *str_concat - concatenates two strings to a memeory space
 * @s1: first string input
 * @s2: second string input
 * @Return: returns the concatenated string(success) or NULL(failure)
 */
char *str_concat(char *s1, char *s2)
{
char *dest;
int j;
int i;
int h = 0;
if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";
for (i = 0; i < s1[i]; i++)
;
i++;
for (j = 0; j < s2[j]; j++)
;
j++;
dest = malloc((sizeof(char) * i) +(sizeof(char) * j) +1);
if (dest == NULL)
{
return (NULL);
}
while (*s1 != '\0')
{
dest[h] = *s1;
s1++;
h++;
}
while (*s2 != '\0')
{
dest[h] = *s2;
s2++;
h++;
}
dest[h] = '\0';
return (dest);
}

