#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position.
* @head: pointer to pointer to the head of the list
* @idx: index where the new node should be added. Index starts at 0
* @n: value to be stored in the new node
*
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *temp = *head;
unsigned int i;

if (head == NULL)
return (NULL);

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (i = 0; i < idx - 1; i++)
{
if (temp == NULL)
{
free(new);
return (NULL);
}
temp = temp->next;
}

new->next = temp->next;
temp->next = new;
return (new);
}
