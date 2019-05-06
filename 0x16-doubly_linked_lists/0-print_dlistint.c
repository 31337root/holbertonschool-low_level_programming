#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: Doble linked list from where print the elements.
 * Return: (size_t), number of traversed nodes.
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h->prev)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
