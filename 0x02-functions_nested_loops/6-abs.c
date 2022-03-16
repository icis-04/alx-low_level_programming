#include "main.h"
/**
 * _abs - entry point
 * Description: prints the absolute value of a number
 * Returns: absolute value of s number
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

