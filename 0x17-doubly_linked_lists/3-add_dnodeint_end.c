#include "lists.h"

/**
 * add_dnodeint_end - Function add node at the end
 * @head: first node
 * @n: value
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *aux, *new = malloc(sizeof(dlistint_t));

    if (!new)
        return (NULL);

    new->n = n;
    new->next = NULL;

    if (!*head)
        new->prev = NULL, *head = new;
    else
    {
        aux = *head;
        while (aux->next)
            aux = aux->next;
        aux->next = new;
        new->prev = aux;
    }
    return (new);
}

