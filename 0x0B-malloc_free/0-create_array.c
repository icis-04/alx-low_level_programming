#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array and initializes with a specific char
 * @size: size of the char in bytes
 * @c: the spcific char
 * Return: returns pointer to the array(success) or 0(failure)
 */
char *create_array(unsigned int size, char c)
{
unsigned int p = 0;
char *m;
m = malloc(sizeof(char) * size);
if (size == 0)
{
return (NULL);
}
else
{
while (p < size)
{
m[p] = c;
p++;
}
}
return (m);
}

