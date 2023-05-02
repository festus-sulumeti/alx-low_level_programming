#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t linked list.
* @head: Pointer to the head node of the list.
*
* Return: The data of the head node that was deleted.
*/
int pop_listint(listint_t **head)
{

	listint_t *new = *head; /* Create a new pointer*/
	int number;   /*initialize it to the head node */


	if (!*head) /* If the head node is NULL, return 0 */
		return (0);


	number = (*head)->n; /* Store data of head node in variable */


	*head = new->next; /* Update head pointer to point to next node */


	free(new); /* Free mem allocated to old head node */


	return (number); /* Return data of old head node */
}
