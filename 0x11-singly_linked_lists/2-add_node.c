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
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: ponter structure to recieve.
 * @str: String to recieve.
 * Return: The adress of the new node.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node  = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL || str == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free (new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
