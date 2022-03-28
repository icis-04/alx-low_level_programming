#include "main.h"
/**
 * _strchr - finds the first occurrence of a character
 * @s: The string
 * @c: character to be found
 * Return: returns a pointer to the first occurrence or null otherwise
 */
char *_strchr(char *s, char c)
{
do {
if (*s == c)
return ((char *)s);
}
while (*s++)
;
return (0);
}


