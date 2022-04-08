#include "main.h"
#include <stdlib.h>
/**
 * array_range - an array of integers
 * @min: integer
 * @max: integer
 * Return: pointer
 */
int *array_range(int min, int max)
{
int *i, y, j, x = 0;
j = max - min + 1;
if (min > max)
{
return (NULL);
}
i = malloc(sizeof(int) * j);
if (i == 0)
{
return (NULL);
}
y = min;
for (x = 0; x < j; x++)
{
i[x] = y;
y++;
}
return (i);
}

