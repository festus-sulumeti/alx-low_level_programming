#include "lists.h"

/**
* insert_nodeint_at_index - Function to insert a new node at a given position
* @head: Pointer to the head of the list
* @idx: Index where the new node should be inserted
* @n: Value to be stored in the new node
*
* Return: Address of the new node, or NULL if the operation fails
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current = *head;
unsigned int i;
listint_t *new = malloc(sizeof(listint_t));

if (!head)
return (NULL);

if (idx == 0)
{

if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}

for (i = 0; current && i < idx - 1; i++)
current = current->next;

if (i != idx - 1 || !current)
return (NULL);

listint_t *new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = current->next;
current->next = new;
return (new);
}
