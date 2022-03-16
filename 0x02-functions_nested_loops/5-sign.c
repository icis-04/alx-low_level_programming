#include "main.h"
/**
 * print_sign - entry point
 * deccription: checks for + or -
 * @n: input
 * Return: print 1, 0 or -1
 */
int print_sign(int n)
{
int result;
if (n > 0)
{
_putchar('+');
result = 1;
}
else if (n == 0)
{
_putchar('0');
result = 0;
}
else if (n < 0)
{
_putchar('-');
result = -1;
}
return (result);
}
