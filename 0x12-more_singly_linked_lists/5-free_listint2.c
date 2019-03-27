#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: List to be freed.
 * Return: void.
*/

void free_listint2(listint_t **head)
{
	if (*head == NULL)
	{
		return;
	}
	free_listint2((&(*head)->next));
	free(*head);
	*head = NULL;
}
