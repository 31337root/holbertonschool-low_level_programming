#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list.
 * @head: Linked list.
 * @index: Position in the list to be found.
 * Return: Index node position if success, NULL if failure.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;

	if (head)
	{
		for (i = 0; i < index; temp = temp->next)
		{
			i++;
		}
		return (temp);
	}
	return (NULL);
}
