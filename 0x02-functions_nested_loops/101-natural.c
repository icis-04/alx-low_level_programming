#include "main.h"
/**
 * main - Entry point
 *
 * Return: sum of multiples
 */
int main(void)
{
int c = 0;
int result = 0;
while (c < 1024)
{
if ((c % 3 == 0) || (c % 5 == 0))
{
result = result + c;
}
c++
}
return (result);
}
