#include "main.h"
/**
 * print_alphabet_x10 - prints small letters 10times.
 */
void print_alphabet_x10(void)
{
int i = 0, j;
while (i < 10)
{
j = 'a';
while (j <= 'z')
{
_putchar(j);
j++;
}
_putchar('\n');
i++;
}
}
