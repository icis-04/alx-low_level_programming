#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - printing elements in list
 * @h: inputs
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
unsigned int i = 0;
while (h != NULL)
{
if (h->n)
{
printf("%d\n", h->n);
}
i++;
h = h->next;
}
return (i);
}

