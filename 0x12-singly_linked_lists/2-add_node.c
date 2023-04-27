#include "lists.h"

/**
* _strlen - returns the length of a string
* @s: input string
* Return: the length of the string
*/

int _strlen(const char *s)
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
* add_node - adds a new node at the beginning of a list_t list
* @head: pointer to the head of the list_t list
* @str: string to insert into the new node
* Return: pointer to the new node
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
