#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: String to be copied.
 * Return: char.
*/

char *_strdup(char *str)
{
	int i, i0;
	char *strcpy;

	for (i0 = 0; str[i0] != '\0'; i0++)
	{}

	strcpy = malloc(sizeof(str) * i0);

	if (str == NULL || strcpy == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			strcpy[i] = str[i];
		}
		strcpy[i] = str[i];
		return (strcpy);
	}
	return (0);
}
