#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list.
 * @head: Address of linked list.
 * @n: int to assign.
 * Return: new_node (Address of new node in linked list).
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (*head == NULL)
	{
		return (0);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
