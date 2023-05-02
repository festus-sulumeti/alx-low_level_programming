#include "lists.h"

/**
* free_listint2 - Function freeing a listint_t list.
* @head: Pointer to head node of list.
*
* Return: Nothing point.
*/
void free_listint2(listint_t **head)
{

listint_t *tmp;

if (!head)
return;


do {
for (tmp = *head; tmp; tmp = tmp->next)
{
if (*head)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
}
}
} while (*head);
}
