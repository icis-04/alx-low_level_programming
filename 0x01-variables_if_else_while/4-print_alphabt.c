#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:0  on Succes;
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
	if (c != 'q' && c != 'e')
{
	putchar(c);
}

c++;
}
putchar('\n');
return (0);
}
