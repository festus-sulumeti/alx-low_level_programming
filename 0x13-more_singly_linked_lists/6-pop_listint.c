#include "lists.h"

/**
* pop_listint - Function deletes head node.
* @head: Pointer to head node of list.
*
* Return: data of head node.
*/
int pop_listint(listint_t **head)
{

listint_t *new = *head;
int number = new->n;

if (!head || !(*head))

return (0);


*head = new->next;
free(new);

return (number);
}
