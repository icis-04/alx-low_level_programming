#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add new element to the end
 * @head: first element
 * @n: new element
 * Return: returns address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode;
listint_t *tmp;
if (head == NULL)
{
return (NULL);
}
newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
*head = newnode;
return (newnode);
}
tmp = *head;
while (tmp->next)
{
tmp = tmp->next;
}
tmp->next = newnode;
return (newnode);
}

