#include "lists.h"

/**
* add_nodeint - Function adding new node to beginning of linked list.
* @head: pointer to a pointer to head of list.
* @n: integer value of a new node.
*
* Return: pointer to newly added node here.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));

if (!new)

return (NULL);


new->n = n;

if (*head)

new->next = *head;

else
new->next = NULL;

*head = new;

return (new);
}
