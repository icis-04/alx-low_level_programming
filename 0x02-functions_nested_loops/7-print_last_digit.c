#include "main.h"
/**
 * print_last_digit - entry point
 * Description: prints last digit
 * @c: input
 * return: 0 success
 */
int print_last_digit(int c)
{
int last_number;
if (c >= 0)
{
last_number = c % 10;
_putchar(last_number);
}
else if (c < 0)
{
last_number = (c % 10) * -1
}	
return (0);
}
