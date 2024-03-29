#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list.
 * @head: the head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	if (head->next == NULL)
	{
		free(head);
		return;
	}

	free_listint(head->next);
	free(head);
}
