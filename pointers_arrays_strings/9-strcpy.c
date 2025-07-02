#include "main.h"

/**
 * _strcpy - Function that copies and string into other variable
 * @*src: Pointer to array to be copied
 * @*dest: Pointer to destination array
 * Return: char.
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
