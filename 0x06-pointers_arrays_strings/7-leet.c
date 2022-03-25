#include "main.h"
/**
 * leet - Encode strings
 * @a: array
 * Return: a
 */
char *leet(char *a)
{
char s[10] = "aAeEoOtTlL";
char p[10] = "4433007711";
int i = 0;
int j = 0;
while (a[i] != '\0')
{
for (j = 0; (s[i] != '\0') && (a[i] != s[j]); j++)
;
if (j < 10)
{
a[i] = p[j];
}
i++;
}
return (a);
}

