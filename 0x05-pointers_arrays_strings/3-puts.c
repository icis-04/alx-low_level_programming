#include "main.h"
/**
 * _puts - Entry point
 * @str: input
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}

