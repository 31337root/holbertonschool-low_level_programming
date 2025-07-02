#include "main.h"
#include <stdlib.h>

/**
 * *_strncat - Function to concatenate two strings.
 * Description: Concatenate the number of characters given on n.
 * @dest: String to be concatenate.
 * @src: String to be copied.
 * @n: Numer of characters to be copied.
 * Return: char.
*/

char *string_toupper(char *a)
{
	if (a)
	{
		int leng1, i;

		for (leng1 = 0; a[leng1] != '\0'; leng1++)
		{}

		for (i = 0; i < leng1; i++)
		{
			if (a[i] >= 'a' && a[i] <= 'z')
			{
				a[i] = (a[i] - 32);
			}
		}
		return (a);
	}
	else
	{
		return (a);
	}
}
