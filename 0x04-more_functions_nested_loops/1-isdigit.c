#include "main.h"
/**
 * _isdigit - Entry point
 * @c: input
 * Return: returns 1 for digit and 0 for otherwise
 */
int _isdigit(int c)
{
if ((c == '0') || (c <= '9'))
{
return (1);
}
else
{
return (0);
}
}
