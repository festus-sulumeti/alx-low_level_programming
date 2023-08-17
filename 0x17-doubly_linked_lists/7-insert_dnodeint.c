#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h: head
* @idx: index
* @n: new data
* Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *node = *h, *new;

if (*h == NULL)
return (NULL);

if (idx == 0)
return (add_dnodeint(h, n));

while (node != NULL)
{
if (i == idx - 1)
{
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = node->next;
new->prev = node;
if (node->next != NULL)
node->next->prev = new;
node->next = new;
return (new);
}
node = node->next;
i++;
}

if (i == idx)
return (add_dnodeint_end(h, n));

return (NULL);
}
