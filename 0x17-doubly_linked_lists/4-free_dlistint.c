#include "lists.h"

/**
 * free_dlistint - Function free the list
 * @head: first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head) /*1. when the list is over */
	{
		tmp = head;	   /* 2. tmp allocate the head node*/
		head = head->next; /* 3. travel in the list */
		free(tmp);	   /*4. free withouth lost the nest direction */
	}
}
