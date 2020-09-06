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
	unsigned int i = 0;
	dlistint_t *aux = *h, *new = NULL;

	new = malloc(sizeof(dlistint_t));
	/* 1.verify space */
	if (!new)
		return (NULL);
	/*2. check the index is diferent t 0 else return the node */
	/*adt he int*/
	if (idx == 0)
		return (add_dnodeint(h, n));
	/*3. while the aux exist */
	while (aux)
	{ /* 4. check if we are not in the last node*/
		if (i == idx - 1 && aux->next != NULL)
		{
			/* 5. Assign data*/
			new->n = n;
			/* 6. Adjust pointers if new node*/
			new->next = aux->next;
			new->prev = aux;
			/* 7. adjust new pointers to aux*/
			aux->next->prev = new;
			aux->next = new;
		} /* 8. if we are in the last node add node */
		else if (i == idx - 1 && aux->next == NULL)
			return (add_dnodeint_end(h, n));
		aux = aux->next, i++; /* 9.travel in the list */
	}
	if (idx > i)
		return (NULL);
	return (new);
}
