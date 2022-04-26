#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds element to the beginning of a list
 * @head: first element
 * @n: new element
 * Return: returns address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *tmp;
if (head == NULL)
{
return (NULL);
}
tmp = malloc(sizeof(listint_t));
if (tmp == NULL)
{
return (NULL);
}
tmp->n = n;
tmp->next = *head;
*head = tmp;
return (tmp);
}
