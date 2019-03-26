#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: Addres of list to be processed.
 * Return: i (number of nodes passed through).
*/

size_t print_listint(const listint_t *h)
{
	int i;
	if (h == NULL)
	{
		return (0);
	}
	for (i = 1; h->next != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		i++;
	}
	printf("%d\n", h->n);
	return (i);
}
