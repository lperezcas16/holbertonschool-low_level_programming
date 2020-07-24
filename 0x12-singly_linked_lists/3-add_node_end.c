#include "lists.h"

/**
 * add_node_end - Function
 * @head: first nodo
 * @str: String 
 *
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nodo = malloc(sizeof(list_t)), *last = NULL;
	char *ptr = strdup(str);

	if(!new_nodo)
		return (NULL);

	new_nodo->str = ptr;
	new_nodo->len = strlen(str);
	new_nodo->next = NULL;

	last = *head;
	if (!last)
		*head = new_nodo;
	else
	{
		while (last->next)
			last = last->next;
		last->next = new_nodo;
	}
	return (*head);
	

}
