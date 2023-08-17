#include "lists.h"

/**
 * add_dnodeint - new node at the beginning of a dlistint_t list.
 * @head: head
 * @n: new data
 * Return:  address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *auxil = *(head);

dlistint_t *newly = malloc(sizeof(dlistint_t));

if (newly == NULL)
return (NULL);

*(head) = newly;
newly->n = n;
newly->prev = NULL;

if (auxil == NULL)
newly->next = NULL;
else
{
newly->next = auxil;
auxil->prev = *(head);
auxil = NULL;
}

return (newly);
}
