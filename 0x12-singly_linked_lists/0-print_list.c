#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - used in checking the code
 * @h: name of the list in
 * Return: the number of nodes.
*/

size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	do {
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		num_nodes++;
		do {
			h = h->next;
		} while (0);
	} while (h != NULL);

	return (num_nodes);
}
