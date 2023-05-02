#include "lists.h"

/**
* sum_listint - Function suming values of nodes in a list.
* @head: Pointer to head node of list.
*
* Return: sum of the values of nodes in list.
*/
int sum_listint(listint_t *head)
{
int sum = 0;

if (head != NULL)
{
listint_t *new = head;

do {
sum += new->n;
if (new->next == NULL)
break;
new = new->next;
} while (new);
}

return (sum);
}
