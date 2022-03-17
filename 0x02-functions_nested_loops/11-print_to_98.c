#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints from number to 98
 * @n: input
 * Return: range of numbers to 98
 */
void print_to_98(int n)
{
while (n != 98)
{
if (n < 98)
printf("%d, ", n);
n++;
printf("98");
}
if (n > 98)
{
printf("%d, ", n);
n--;
printf("98");
}
}


