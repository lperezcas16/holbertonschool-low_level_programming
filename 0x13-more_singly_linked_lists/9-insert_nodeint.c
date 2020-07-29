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
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *actual = *head;
	unsigned int i = 0;

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

	for (; i < idx - 1; i++)
	{
		actual = actual->next;
		if (actual == NULL && idx - i > 0)
		{
			free(new);
			return (NULL);
		}
	}

	new->next = actual->next;
	actual->next = new;

	return (new);
}	
