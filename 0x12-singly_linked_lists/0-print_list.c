#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - print elements in a linked list
* @h: pointer to head first node
* Return: the number of nodes.
*/

size_t print_list(const list_t *h)
{
size_t num_nodes = 0;

if (h == NULL)
return (0);

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
num_nodes++;
h = h->next;
}

return (num_nodes);
}
