#include "lists.h"
#include <stddef.h>
/**
 * listint_len - prints length of string
 * @h: elements
 * Return: length of string
 */
size_t listint_len(const listint_t *h)
{
int i = 0;
while (h != NULL)
{
if (h->n)
{
i++;
}
h = h->next;
}
return (i);
}
