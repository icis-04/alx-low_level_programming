#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse recursively
 * @s: string input
 */
void _print_rev_recursion(char *s)
{
s--;
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_print_rev_recursion(s);
}
}
