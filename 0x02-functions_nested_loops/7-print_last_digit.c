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
last_number = c % 10;
_putchar(last_number);
return (0);
}
