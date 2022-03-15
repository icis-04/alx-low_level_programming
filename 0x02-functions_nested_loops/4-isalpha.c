#include "main.h"
/**
 * _isalpha - checks for upper case letters
 * Return: 1 on Success and 0 if anything else.
 * @c - input.
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

