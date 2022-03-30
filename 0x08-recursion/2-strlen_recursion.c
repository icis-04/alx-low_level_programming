#include "main.h"
/**
 * _strlen_recursion - gets the lenghth of string through recursion
 * @s: input string
 * Return: returns length of string
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (s[i] != '\0')
{
i++;
_strlen_recursion(s);
}
else
{
return (0);
}
return (i);
}
