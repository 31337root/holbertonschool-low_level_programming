#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked
 * dlistint_t list.
 * @h: Doble linked list from where count the elements.
 * Return: (size_t), number of traversed nodes.
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
