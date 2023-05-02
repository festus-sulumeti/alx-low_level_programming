#include "lists.h"

/**
* pop_listint - Function deleting head node.
* @head: Pointer to head node of list.
*
* Return: data of head node.
*/
int pop_listint(listint_t **head)
{

listint_t *new = *head;
int number;

if (!head)
return (0);


if (new)
{
number = new->n;
*head = new->next;
free(new);
return (number);
}

}
