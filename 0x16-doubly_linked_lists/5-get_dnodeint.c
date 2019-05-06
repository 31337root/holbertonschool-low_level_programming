#include "lists.h"

/**
 *
 *
 *
 *
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int i, ind = (int) index;

	if (head)
	{
		while (head->prev)
			head = head->prev;

		for (i = 1; i <= ind; i++)
		{
			if (head->next)
				head = head->next;
			else
				return (NULL);
		}
		return (head);
	}
	return (NULL);
}
