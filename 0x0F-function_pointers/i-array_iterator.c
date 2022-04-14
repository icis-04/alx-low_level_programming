#include "function_pointers.h"
/**
 * array_iterator - prints element of an array
 * @array: array of values
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
{
return;
}
while (size-- > 0)
{
action(*array);
array++;
}
}


