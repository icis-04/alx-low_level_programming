#include "main.h"
/**
 * print_last_digit - entry point
 * Description: prints last digit
 * @c: input
 * return: 0 success
 */
int print_last_digit(int c)
{
int last_number, result;
if (c > 0)
{
last_number = c % 10;
_putchar(last_number);
}
else if (c < 0)
{
result = c * -1;
last_number = result % 10;
_putchar(last_number);
}
else
{
last_number = 0;
_putchar(last_number);
}
_putchar('0' + last_number);
return (last_number);
}
