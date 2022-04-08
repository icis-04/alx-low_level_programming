#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory space to the input
 * @b: input
 * Return: returns pointer to memory(success) or 98(failure)
 */
void *malloc_checked(unsigned int b)
{
char *c;
c = malloc(b);
if (c == NULL)
{
exit(98);
}
return (c);
}
