#include "lists.h"

/**
 * insert_dnodeint_at_index - Function insert
 * @h: header
 * @idx: index
 * @n: valueo date
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = NULL, *new = *h;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!*h)
		return (NULL);
	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	while (new)
	{
		if (idx == i)
		{
			tmp->prev = new->prev;
			tmp->next = new;
			new->prev = tmp;
			tmp->prev->next = tmp;
			return (tmp);
		}
		if (!new->next && idx == i + 1)
			return (free(tmp), add_dnodeint(h, n));
		new = new->next;
		i++;
	}
	free(tmp);
	return (NULL);
}
