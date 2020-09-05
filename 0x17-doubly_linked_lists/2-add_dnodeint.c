#include "lists.h"

/**
 * add_dnodeint - Add node at the beginning
 * @head: first node
 * @n: variable in the node
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->prev = NULL;

	if (!*head)
		tmp->next = NULL, *head = tmp;
	else
	{
		tmp->next = *head;
		(*head)->prev = tmp;
		*head = tmp;
	}
	return (tmp);
}
