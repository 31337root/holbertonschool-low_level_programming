#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a
 * dlistint_t linked list.
 * @head: Pointer to the doble linked list.
 * Return: The adition of all (n) on every node.
*/

int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	if (head)
	{
		while (head->prev)
			head = head->prev;

		while (head->next)
		{
			add += head->n;
			head = head->next;
		}
		add += head->n;
		return (add);
	}
	else
	{
		return (0);
	}
}
