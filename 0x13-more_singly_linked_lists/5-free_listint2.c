#include "lists.h"

/**
 * free_listint2 -
 *
 * Return: 
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;

	if (!head)
		return;
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	// *head = NULL;
}
