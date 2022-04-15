#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - entry point
 * @separator: string separating the integers
 * @n: integers to be printed
 * ...: other variables that can be put
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (i != (n-1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}

