#include "lists.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 *
*/

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{	if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		i++;
	}

	return (i);
}
