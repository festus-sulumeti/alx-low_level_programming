#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: double pointer to the list_t list
 * @str: string to add to node
 *
 * Return: the address of the new list, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
int length = 0;

temp = malloc(sizeof(list_t));
if (temp == NULL)
return (NULL);

while (str[length])
length++;

temp->len = len;
temp->str = strdup(str);
temp->next = *head;
*head = temp;

return (temp);
}
