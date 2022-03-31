#include "main.h"
/**
 * _square - finds square of a number 
 * @n: input
 * @i: input 
 * Return: returns square of the input
 */
int _square(int i, int n)
{
if (i * i == n)
{
return (i);
}
else if (i > n / 2)
{
return (-1);
}
else
{
return (_square(i + 1, n));
}
return (0);
}
/**
 * _sqrt_recursion - finds square root of a number
 * @n: input
 * Return: returns square root of the input
 */
int _sqrt_recursion(int n)
{
return (_square(1, n));
}

