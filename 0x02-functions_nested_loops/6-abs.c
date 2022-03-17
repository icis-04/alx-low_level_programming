#include "main.h"
/**
 * _abs - prints the absolute value of a number
 * Return: absolute value
 * @i: input
 */
int _abs(int i)
{
if (i >= 0)
{
i = i * 1;
}
else if (i == 0)
{
i = 0;
}
else if (i < 0)
{
i = i * -1;
}
return (i);
}

