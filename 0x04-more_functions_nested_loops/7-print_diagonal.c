#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: input
 */
void print_diagonal(int n)
{
int i = 0;
int j;
if (n == 0 || n < 0)
{
_putchar('\n');
}
else
{
while (i < n)
{
j = 0;
while (j <= i)
{
if (j == i)
{
_putchar('\\');
}
else if (j < i)
{
_putchar(' ');
}
j++;
}
_putchar('\n');
i++;
}
}
}
