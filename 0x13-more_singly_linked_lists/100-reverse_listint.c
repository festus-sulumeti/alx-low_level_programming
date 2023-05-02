#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: pointer
 * Return: a pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new_node = *head, *next_node = NULL;

	if (*head == NULL)
		return (NULL);

	while (new_node != NULL)
	{
		new_node = (*head)->next;
		(*head)->next = next_node;
		next_node = *head;

		if (new_node != NULL)
			*head = new_node;
	}


	next_node = NULL;
	return (*head);
}
