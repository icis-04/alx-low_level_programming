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
unsigned int i;
while (h != NULL)
{
if (h->n)
{
printf("%d", h->n);
}
i++;
h = h->next;
}
return (i);
}

