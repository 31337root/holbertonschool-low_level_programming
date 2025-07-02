#include "main.h"

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
	int count;

	for (count = 0; count < n && dest[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}
	while ((count + 1) < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
