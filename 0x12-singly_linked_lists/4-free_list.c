#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees a list
* @head: list_t list freed
*/
void free_list(list_t *head)
{
list_t *temp;

do {
temp = head;
head = head->next;
free(temp->str);
free(temp);
} while (head != NULL);
}
