#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: Linked list.
 * Return: int, sum if success, 0 if failure.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		for (; head->next != NULL; head = head->next)
		{
			sum += head->n;
		}
		sum += head->n;
		return (sum);
	}
	return (0);
}
