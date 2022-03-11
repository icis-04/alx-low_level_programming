#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char x;
char y;
for (x = 'a', y = 'A'; x<= 'z', y <= 'Z'; x++, y++)
{
	putchar(x);
	putchar(y);
}
putchar('\n');
return 0;
}
