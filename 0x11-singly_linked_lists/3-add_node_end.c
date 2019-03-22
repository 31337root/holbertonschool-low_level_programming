#include "lists.h"

/**
 * _strlen - Function to count the length of a string.
 * Description: Will count the number of characters from the input.
 * @s: Parameter to be processed
 * Return: Integer.
*/

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; ++c)
	{}
	return (c);
}

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: Adrres of the first node.
 * @str: String to be copied.
 * Return: The addres of the new node.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node  = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL || str == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_node->str);
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
