#include "lists.h"

/**
* free_listint - Freeing a listint_t list.
* @head: Pointer to head node of list.
*
* Return: Nothing point.
*/
void free_listint(listint_t *head)
{
listint_t *current_node;

do {
current_node = head;
if (head)
head = head->next;
free(current_node);
} while (head);
}
