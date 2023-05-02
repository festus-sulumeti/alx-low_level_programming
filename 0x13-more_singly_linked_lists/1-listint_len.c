#include "lists.h"

/**
* listint_len - Function that returns length of a linked list.
* @h: pointer to head of the list.
*
* Return: size_t length of the list.
*/
size_t listint_len(const listint_t *h)
{
size_t length = 0;

while (h)
{
h = h->next;
length++;
}

return (length);
}
