#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a dlistint_t linked list.
 * @head: the head node of the list
 * @index: the position to get the node
 * Return: node else NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	while (temp != NULL)
	{
		if (index == i)
			return (temp);
		temp = temp->next;
		i++;
	}

	return (NULL);
}
