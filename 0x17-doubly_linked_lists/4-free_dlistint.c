#include "lists.h"

/**
* free_dlistint - free a dlistint_t list
* @head: head
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp = NULL;

if (head != NULL)
{
while (head != NULL)
{
if (head->next != NULL)
{
temp = head;
head = head->next;
free(temp);
}
else
{
free(head);
break;
}
}
}
}
