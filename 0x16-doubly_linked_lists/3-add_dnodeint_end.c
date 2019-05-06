#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a
 * dlistint_t list.
 * @head: Doble linked list to add node at the end.
 * @n: Data to store.
 * Return: the address of the new element, or NULL if it failed.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	int data = (int) n;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = data;
	new->next = NULL;
	new->prev = NULL;

	if (*head)
	{
		(*head)->next = new;
		new->prev = *head;
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
