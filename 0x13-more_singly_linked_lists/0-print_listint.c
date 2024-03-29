#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);

	printf("%d\n", h->n);
	return ((print_listint(h->next)) + 1);
}
