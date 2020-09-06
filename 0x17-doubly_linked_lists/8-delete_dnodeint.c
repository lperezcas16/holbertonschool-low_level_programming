#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a list.
 * @head: First node
 * @index: Index.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *aux;
	/* 1. check the input */
	if (*head == NULL || head == NULL)
		return (-1);
	/* 2. assigne aux the same value of head*/
	aux = *head;
	/*3. If there is a mistake with the input  free the list*/
	if (index == 0 && (*head)->next == NULL)
		return (free(*head), *head = NULL, 1);
	else if (index == 0 && (*head)->next != NULL)	   /*4. if the index is 0*/
	{						   /* pointer next of head */
		(*head) = (*head)->next;		   /* is diferent to null (EDGE CASE)*/
		free((*head)->prev), (*head)->prev = NULL; /*5.delete the node in position */

		return (1); /* Return 1 to successful */
	}
	while (aux)
	{
		if (i == index - 1 && aux->next != NULL)
		{
			aux->next = aux->next->next;
			free(aux->next->prev);
			aux->next->prev = aux;
			return (1);
		}
		else if (i == index - 1 && aux->next == NULL)
		{
			free(aux->next);
			aux->next = NULL;
			return (1);
		}
		aux = aux->next, i++;
	}
	if (index > i)
		return (-1); /* return -1 process failes */
	return (-1);
}
