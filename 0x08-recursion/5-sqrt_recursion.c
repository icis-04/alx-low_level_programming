#include "main.h"
/**
 * _sqrt_recursion - finds square root of a number 
 * @n: input 
 * Return: returns square root of the input
 */
int _sqrt_recursion(int n)
{
int i = 0;
i++;
if  (i <= n)
{
if (i * i == n)
{
return (i);
}
else
{
return (-1);
}
}
return (0);
}
