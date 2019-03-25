#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: Addres of list to be processed.
 * @i: Index.
 * Return: i (number of nodes passed through).
*/

size_t print_listint(const listint_t *h)
{
	int i = 0;

	for (i++; h->next != NULL; h = h->next)
	{
		printf("%d\n", h->n);
	}
	printf("%d\n", h->n);
	return (i);
}
