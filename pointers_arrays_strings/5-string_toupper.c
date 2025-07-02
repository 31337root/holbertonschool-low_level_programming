#include "main.h"
#include <stdlib.h>

/**
 * *string_toupper - Function to convert lowercase to upper
 * @a: String to be converted to upper case
 * Return: char
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
