#include "lists.h"

/**
 *  add_dnodeint_end - new node at the beginning of a dlistint_t list.
 * @head: head
 * @n : new data
 * Return: the number of elements in a linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_d, *last_node = *head;

new_d = malloc(sizeof(dlistint_t));


if (new_d == NULL)
return (NULL);


new_d->n = n;

if (*head == NULL)
{
*head = new_d;
return (new_d);
}

while (last_node->next != NULL)
{
last_node = last_node->next;
}
last_node->next = new_d;


new_d->next = NULL;
new_d->prev = last_node;

return (new_d);
}
