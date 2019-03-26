#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a
 * linked listint_t list.
 * @h: singly linked list.
 * Return: i (number of nodes in the linked list,)
*/

size_t listint_len(const listint_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 1; h->next != NULL; h = h->next)
	{
		i++;
	}
	return (i);
}
