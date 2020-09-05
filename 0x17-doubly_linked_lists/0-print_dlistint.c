#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a list
 * @h: header, first node  *
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	/*1. if the node is true*/
	while (h)
	{
		printf("%d\n", h->n); /*2. print the value in the node*/
		i++, h = h->next;
		/*3. increment i(number of nodes)*/
		/*and travel in the list*/
	}
	return (i);
}
