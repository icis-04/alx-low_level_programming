#include "main.h"
/**
 * reverse_array - Entry point
 * @a: First input
 * @n: Second input
 */
void reverse_array(int *a, int n);
{
int i = 0;
int b = 0;
int j = 0;
n -= 1;
while (i < n)
{
j = a[i];
b = a[n];
a[n] = j;
a[i] = b;
i++;
n--;
}
}
