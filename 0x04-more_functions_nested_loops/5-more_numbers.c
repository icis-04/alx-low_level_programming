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
j = '0';
while (j <= '14')
{
_putchar(j);
j++;
}
i++;
}
}

