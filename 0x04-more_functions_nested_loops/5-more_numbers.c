#include "main.h"
/**
 * more_numbers - prints numbers from 1 to 14 10 times.
 */
void more_numbers(void)
{
int i = 0;
int j;
while (i < 10)
{
j = 0;
while (j < 15)
{
if (j >= 10)
{
_putchar(j / 10 + '0');
}
_putchar(j % 10 + '0');
j++;
}
_putchar('\n');
i++;
}
}

