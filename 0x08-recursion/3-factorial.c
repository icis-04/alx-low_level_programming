#include "main.h"
/**
 * factorial - prints a digit factorial
 * @n: input
 * Return: factorial of a nmber
 */
int factorial(int n)
{
if (n < 1)
{
return (-1);
}
else if (n == 0 || n ==1)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
