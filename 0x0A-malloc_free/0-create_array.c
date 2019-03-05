#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 *
 *
 *
 *
*/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(size);

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			str[i] = c;
			i++;
		}
		return (str);
	}
	return (0);
}
