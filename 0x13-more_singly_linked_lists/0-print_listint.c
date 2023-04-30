#include "lists.h"

/**
* print_listint - Prints all elements of  listint_t list.
* @h: Head of the list
*
* Return: elements' number
**/
size_t print_listint(const listint_t *h)
{
int i = 0;

do {
printf("%d\n", h->n);
i++;
h = h->next;
} while (h != NULL);

return (i);
}
