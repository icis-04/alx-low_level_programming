#include "main.h"
/**
 * main - Entry point
 *
 * Return: sum of multiples
 */
int main(void)
{
int c;
int result = 0;
for (c = 0; c < 1024; c++)
{
if ((c % 3 == 0) || (c % 5 == 0))
{
result = result + c;
}
return (result);
}
}
