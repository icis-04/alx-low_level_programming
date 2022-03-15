#include "main.h"
/**
 * _isalpha - ABCD
 * Return: 1 on Success and 0 if anything else.
 * @c - char
 */

int _isalpha(int c)
{
if ((c >= 'A') && (c <= 'z'))
{
return (1);
}
else
return (0);
_putchar('\n');
}

