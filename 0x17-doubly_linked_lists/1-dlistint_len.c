#include "lists.h"

/**
 * dlistint_len - Function for know the lenght if list
 * @h: first node
 * Return: lengh list
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t i;

    for (i = 0; h; i++)
        /* 1. travel in the list*/
        h = h->next;
    return (i);
}
