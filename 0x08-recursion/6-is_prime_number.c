#include "main.h"
/**
 * _prime - check prime numbers
 * @i: input
 * @n: input
 * Return: integer
 */
int _prime(int i, int n)
{
if (n < 2 || !(n % i))
{
return (0);
}
else if (i > n / 2)
{
return (1);
}
else
{
return (_prime(i + 1, n);
}
return (0);
}
/**
 * is_prime_number - prime number check
 * @n: integer
 * Return: integer
 */
int is_prime_number(int n)
{
return (_prime(2, n));
}
