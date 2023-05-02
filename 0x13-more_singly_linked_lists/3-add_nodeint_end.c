#include "lists.h"

/**
* add_nodeint_end - Function adding a new node to end of linked list.
* @head: pointer to a pointer to head of list.
* @n: integer value of a new node.
*
* Return: pointer to newly added node.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t)); /* allocate memory for new node */

if (!new) /* check if allocation was successful */
return (NULL);

new->n = n; /* assign value to new node */
new->next = NULL;

if (!(*head)) /* if list is empty, make new node the head */
*head = new;

else /* if list is not empty, traverse to the end and add new node */
{
listint_t *last = *head;

do {
if (!last->next) /* if last node, add new node */
{
last->next = new;
break;
}

last = last->next; /* move to next node */
} while (last);
}

return (*head); /* return pointer to head of list */
}
