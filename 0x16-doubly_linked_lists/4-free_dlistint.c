#include "lists.h"

/**
 *
 *
 *
 *
*/

void free_dlistint(dlistint_t *head)
{
	while (head->prev)
		head = head->prev;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
	return;
}
