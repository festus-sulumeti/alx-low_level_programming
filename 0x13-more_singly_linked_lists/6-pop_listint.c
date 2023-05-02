#include "lists.h"

/**
* pop_listint - Function that deletes the head nodo
* @head: head nodo
*
* Return: head node’s data
*/
int pop_listint(listint_t **head)
{
listint_t *new = *head;
int number = new->n;

if (!head || !*head)
return (0);

if (new->next)
*head = new->next;
else
*head = NULL;

free(new);

return (number);
}
