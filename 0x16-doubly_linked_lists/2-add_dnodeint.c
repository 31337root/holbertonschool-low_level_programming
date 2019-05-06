#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a
 * dlistint_t list.
 * @head: Doble linked list to add node at the beginning.
 * @n: Data to store.
 * Return: the address of the new element, or NULL if it failed.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	int temp = (int) n;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}

	new->next = NULL;
	new->prev = NULL;
	new->n = temp;

	if (*head)
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
		return (*head);
	}
	else
	{
		*head = new;
		return (*head);
	}
	return (NULL);
}
