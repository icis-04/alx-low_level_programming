#include "main.h"
/**
 * print sign - entry point
 * deccription: checks for + or -
 * @n: input
 * return: 1, 0 or -1.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('+');
return (-1);
}
_putchar('\n');

}
