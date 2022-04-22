#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - prints length of list
 * @h: input
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
unsigned int u = 0;
while (h != NULL)
{
h = h->next;
u++;
}
return u;
}

