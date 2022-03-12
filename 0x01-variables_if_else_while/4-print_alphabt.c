#include <stdio.h>
/**
 * main -prints the alphabet except c and a
 *
 * (Return:0  on succes;
 */
int main(void)
{
char c = 'a';
while(c <= 'z')
{
	if (c != 'q' && c!='e')
{
	putchar(c);
}

c++;
}
putchar('\n');
return (0);
}
