#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * *create_array - function that creates an array of chars, 
 * and initializes it with a specific char.
 * @size: The size of the character array.
 * @c: Character to store in the array.
 * Return: char.
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
