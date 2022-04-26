#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees the memory of the list
 * @head: input
 */
void free_listint(listint_t *head)
{
listint_t *tmp;
tmp = head;
while (head != NULL)
{
tmp = head;
head = tmp->next;
free(tmp->n);
free(tmp);
}
}

