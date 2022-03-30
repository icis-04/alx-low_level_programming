#include "main.h"
/**
 * _strlen_recursion - gets the lenghth of string through recursion
 * @s: input string
 * Return: returns length of string
 */
int _strlen_recursion(char *s)
{
int i;
if (*s == '\0')
return (0);
i = _strlen_recursion(s + 1) + 1;
return (i);
}
