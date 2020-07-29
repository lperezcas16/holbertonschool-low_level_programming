#include "lists.h"

/**
 * insert_nodeint_at_index - Function insert node
 * @head: head nodo
 * @idx: index
 * @n: integer
 *
 * Return: listint
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{	
	listint_t *new;
	listint_t *actual = *head;
	unsigned int pos = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL && idx > 0)
	{
		free(new);
		return (NULL);
	}

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (; pos < idx - 1; pos++)
	{
		actual = actual->next;
		if (actual == NULL && idx - pos > 0)
		{
			free(new);
			return (NULL);
		}
	}

	new->next = actual->next;
	actual->next = new;

	return (new);;
}	
