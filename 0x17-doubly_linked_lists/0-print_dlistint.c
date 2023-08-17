#include "lists.h"

/**
*  print_dlistint - print doubly linked list
* @h: head
* Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t n = 0;
dlistint_t *current_node = h;

while (current_node != NULL)
{
printf("%i\n", current_node->n);
current_node = current_node->next;
n++;
}
return (n);
}
