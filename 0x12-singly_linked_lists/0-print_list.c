#include "lists.h"

/**
 * print_list - Funtion 
 * @h: list
 *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next, i++;
	}
	return (i);
}
