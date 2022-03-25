#include "main.h"
/**
 * cap_string - capitalize characterize
 * @s: string
 * Return: string
 */
char *cap_string(char *s)
{
int i = 0;
int j;
char spec[] = {' ', '\t', '\n', ',', ';', '.', '!', '"', '(', ')', '{', '}'};
if (s[0] >= 'a' && s[0] <= 'z')
{
s[0] -= 32;
}
while (s[i] != '\0')
{
for (j = 0; spec[j] != '\0'; j++)
{
if (s[i - 1] == spec[j] && s[i] <= 122 && s[i] >= 97)
s[i] = s[i] - 32;
}
i++;
}
return (s);
}


