#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list.
* @h: pointer to the list.
* Return: number of nodes.
**/
size_t print_listint(const listint_t *h)
{
const listint_t *node = h;
size_t num_nodes = 0;

do {
printf("%i\n", node->n);
num_nodes++;
node = node->next;
} while (node != NULL);

return (num_nodes);
}
