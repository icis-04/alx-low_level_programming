#include "main.h"
/**
 * puts2 - Entry point
 * @str: input
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] % 2 == 0)
{
_putchar(str[i]);
}
str++;
i++;
}
_putchar('\n');
}




