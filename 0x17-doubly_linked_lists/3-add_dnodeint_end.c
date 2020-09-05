#include "lists.h"

/**
 * add_dnodeint_end - Function add node at the end
 * @head: first node
 * @n: value
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux = NULL, *new = malloc(sizeof(dlistint_t));
	/* 1. check the malloc*/
	if (!new)
		return (NULL);
	/* 2. Asigne value to data ant next pointer (NULL) because is the last*/
	new->n = n;
	new->next = NULL;

	if (!*head)
		new->prev = NULL, *head = new; /*3. If there are no nodes */
	else
	{
		aux = *head; /*4.  save head in aux */
		while (aux->next)
			aux = aux->next; /*5. travel the list and find last node*/
		aux->next = new;	 /* 6. the last node is the new now*/
		new->prev = aux;	 /* 7. the previous is the past last */
	}
	return (new);
}
