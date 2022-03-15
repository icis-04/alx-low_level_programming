#include "main.h"
/**
 * _isalpha - ABCD
 * Returns: 0 or 1.
 * c - char
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

