#include "lists.h"

/**
* _strlen - returns length of a string.
* @s : s is a char
* Return: value is i
*/
int _strlen(const char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
;

return (i);
}


/**
* add_node - add a new node at beginning
* @head: head of a list_t list.
* @str: value to insert
* Return: number of nodes.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
