#include <string.h>
#include "lists.h"
/**
 * add_node_end - add node to the end
 * @head: first node
 * @str: string to be added
 * Return: returns list_t struct
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *tmp;
unsigned int i = 0;

if (str == NULL)
return (NULL);

new_node = malloc(sizeof(list_t));

if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
while (new_node->str[i])
{
i++;
}
new_node->len = i;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

tmp = *head;

for (; tmp->next; i++)

tmp = tmp->next;
tmp->next = new_node;

return (new_node);
}

