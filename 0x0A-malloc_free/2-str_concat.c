#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *str_concat - Function that concatenates two strings.
 * @s1: String 1.
 * @s2: String 2.
 * Return: char.
*/

char *str_concat(char *s1, char *s2)
{
	int i0, i1, i2, i3;
	char *str;

	for (i0 = 0; s1[i0] != '\0'; i0++)
	{}
	for (i1 = 0; s2[i1] != '\0'; i1++)
	{}

	str = malloc(sizeof(str) + i0 + i1 - 1);

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i2 = 0; i2 < (i0); i2++)
		{
			str[i2] = s1[i2];
		}
		for (i3 = 0; i3 <= i1; i3++)
		{
			str[i2] = s2[i3];
			i2++;
		}
		return (str);
	}
	return (0);
}
