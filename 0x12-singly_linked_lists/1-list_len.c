#include "lists.h"

/**
* list_len - gets the number of nodes
*
* @h: pointer to the head (first node)
*
* Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	int num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
