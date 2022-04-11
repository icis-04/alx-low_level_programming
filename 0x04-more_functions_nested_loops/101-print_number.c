#include "main.h"
/**
 * print_number - Entry point
 * @n: input
 */
void print_number(int n)
{
if (n >= 0 || n < 10)
{
_putchar(n % 10 + '0');

