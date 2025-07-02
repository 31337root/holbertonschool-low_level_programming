#include "main.h"

/**
 * *_strncat - Function to concatenate two strings.
 * Description: Concatenate the number of characters given on n.
 * @dest: String to be concatenate.
 * @src: String to be copied.
 * @n: Numer of characters to be copied.
 * Return: char.
*/

char *_strncat(char *dest, char *src, int n)
{
	int leng1, leng2, c;

	for (leng1 = 0; dest[leng1] != '\0'; leng1++)
	{}
	for (leng2 = 0; src[leng2] != '\0'; leng2++)
	{}

	if (n >= leng2)
	{
		for (c = 0; c <= leng2; c++)
		{
			dest[leng1] = src[c];
			leng1++;
		}
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			dest[leng1] = src[c];
			leng1++;
		}
	}
	return (dest);
}
