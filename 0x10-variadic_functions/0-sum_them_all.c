#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums up all the integers
 * @n: inputs
 * @...: other variables
 * @Return: integers sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int total = 0;
unsigned int i;
va_start(ap, n);
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
total += va_arg (ap, int);
}
va_end (ap);
return (total);
}


