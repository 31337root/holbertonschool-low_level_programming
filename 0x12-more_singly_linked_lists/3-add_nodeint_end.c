#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a
 * listint_t list.
 * @head: Address of lynked list to recieve.
 * @n: Int to store in structure.
 * Return: Addres of the new node.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		for (temp = *head; temp->next != NULL; temp = temp->next)
		{}
		temp->next = new_node;
	}
	return (new_node);
}
