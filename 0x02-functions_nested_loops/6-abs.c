#include "main.h"
/**
 * _abs - entry point
 * returns: 0 success
 * @int: input
 */
int _abs(int i)
{
int j;
if (i >= 0)
{
_putchar(i);
}
else if (i < 0)
{
j = 0 - i;
_putchar(j);
}
_putchar('\n');
return (0);
}

