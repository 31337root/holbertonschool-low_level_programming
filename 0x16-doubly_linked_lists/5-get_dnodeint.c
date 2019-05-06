#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a
 * dlistint_t linked list.
 * @head: Doble linked list where look by index.
 * @index: Position to be found.
 * Return: (Success) Adress of the asked index, (failure) NULL.
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
