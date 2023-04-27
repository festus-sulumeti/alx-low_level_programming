#include "lists.h"
#include <string.h>

/**
* add_node - Adds a new node at the beginning
*            of a list_t list.
* @head: pointer to the head of the list_t list.
* @str: string added to the list_t list.
*
* Return: If the function fails - NULL.
*         Otherwise - address of  new element.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup_str;
	int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new);
		return (NULL);
	}

	do {
		length++;
	} while (str[length] != '\0');

	new->str = dup_str;
	new->length = length;
	new->next = *head;

	*head = new;

	return (new);
}
