#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - adds a new node to the list
 * @head: first input
 * @str: string to be added
 * Return: returns the address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *tmp;
unsigned int i = 0;
if (str == NULL)
{
return (NULL);
}
tmp = malloc(sizeof(list_t));
if (tmp == NULL)
{
return (NULL);
}
tmp->str = strdup(str);
if (tmp->str == NULL)
{
free(tmp);
return (NULL);
}
while (tmp->str[i])
{
i++;
}
tmp->len = i;
tmp->next = *head;
*head = tmp;
return (tmp);
}
