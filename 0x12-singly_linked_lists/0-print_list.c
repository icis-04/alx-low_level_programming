#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints number of nodes in a specified format
 * @h: input
 * Return: returns the number of nodes
 */
size_t print_list(const list_t *h)
{
unsigned int count = 0;
while (h != NULL)
{
if (h->str)
{
printf("[%u] %s\n", h->len, h->str);
}
else
{
printf("[%u] %s\n", 0, "(nil)");
}
h = h->next;
count++;
}
return count;
}
