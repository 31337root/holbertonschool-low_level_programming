#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: Doble linked list from where print the elements.
 * Return: (size_t), number of traversed nodes.
*/

size_t print_dlistint(const dlistint_t *h)
{
/*	dlistint_t *temp; */
	size_t nodes = 0;

	if (h)
	{

		while (h)
		{
			printf("%d\n", h->n);
			nodes++;
			h = h->next;
		}
		return (nodes);
	}
	return (nodes);
}
