#include <stdlib.h>
#include "lists.h"
/**
 * add_node - adds element to the beginning of a linked list
 * @head: first element on the list
 * @n: element to be added
 * Return: returns the address of the new elemnt
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *tmp;
tmp = malloc(sizeof(listint_t));
tmp->n = n;
if (*head == NULL)
{
tmp->next = NULL;
*head = tmp;
}
else
{
tmp->next = *head;
*head = tmp;
}
return (0);
}

