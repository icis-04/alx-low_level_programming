#include "main.h"
/**
 * string_toupper - Entry point
 * @s: input
 * Return: Returns string in upper case
 */
char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
}
reurn (s);
}
