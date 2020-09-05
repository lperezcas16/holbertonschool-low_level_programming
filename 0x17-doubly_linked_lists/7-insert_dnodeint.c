#include "lists.h"

/**
 * insert_dnodeint_at_index - Function insert
 * @h: header
 * @idx: index
 * @n: valueo date
 *
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *tmp = *h;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!*h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	while (tmp)
	{
		if (idx == i)
		{
			new->prev = tmp->prev;
			new->next = tmp;
			tmp->prev = new;
			new->prev->next = new;
			return (new);
		}
		if (!tmp->next && idx == i + 1)
			return (free(new), add_dnodeint(h, n));
		tmp = tmp->next;
	}
	free(new);
	return (NULL);
}
