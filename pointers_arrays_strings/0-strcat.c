#include "main.h"

/**
 * *_strcat - Function to concatenate two strings.
 * Description: Copy all characters of src to dest.
 * @dest: String to be concatenated.
 * @src: String oto be copied.
 * Return: char.
*/

char *_strcat(char *dest, char *src)
{
	int leng1 = 0;
	int leng2 = 0;
	int c = 0;

	for (leng1 = 0; dest[leng1] != '\0'; leng1++)
	{}
	for (leng2 = 0; src[leng2] != '\0'; leng2++)
	{}
	for (c = 0; c <= leng2; c++)
	{
		dest[leng1] = src[c];
		leng1++;
	}
	return (dest);
}
