#include "lists.h"

/**
* dlistint_len - number elements doubly linked list
* @h: head
* Return: the number of elements in a linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t n = 0;
const dlistint_t *tmp;

while (h != NULL)
{
tmp = h;
h = h->next;
n++;
}

return (n);
}
