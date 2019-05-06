#include "lists.h"

/**
 * free_dlistint - function that free a dlistint_t list.
 * @head: Doble linked list to be freed.
 * Return: void.
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
}
