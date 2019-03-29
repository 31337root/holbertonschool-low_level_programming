#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node's data (n).
 * @head: Linked list.
 * Return: int, success always(0).
*/

int pop_listint(listint_t **head)
{
	int num;
	listint_t *tmp;

	if (*head && head)
	{
		num = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (num);
	}
	return (0);
}
