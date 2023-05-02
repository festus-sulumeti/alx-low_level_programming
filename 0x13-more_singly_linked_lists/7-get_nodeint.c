#include "lists.h"

/**
* get_nodeint_at_index - Function that returns nth node of a list.
* @head: Pointer to head node of list.
* @index: Index of the node to return.
*
* Return: nth node of the list, or NULL if it doesn't exist.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *new = head;
unsigned int index_count = 0;

if (!head)
return (NULL);


do {
if (index_count == index)
return (new);
new = new->next;
index_count++;
} while (new);

return (NULL);
}
