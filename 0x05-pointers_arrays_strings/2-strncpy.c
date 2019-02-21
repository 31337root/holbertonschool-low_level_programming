#include "holberton.h"

/**
 * *_strncpy - Function that copies a string.
 * Description: Function to copy the n characters of src to dest.
 * @src: String to be copied.
 * @dest: String to be modified.
 * @n: The number of characters to be copied.
 * Return: char.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && dest[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	for (; c < n; c++)
	{
		dest[c] = '\0';
	}
	return (dest);
}
