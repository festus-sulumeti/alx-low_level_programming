#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: list_t list to be freed
 * Return: no return
 */
void free_list(list_t *head)
{
list_t *temp_node;

while ((temp_node = head) != NULL)
{
head = head->next;
free(temp_node->str);
free(temp_node);

}
}
