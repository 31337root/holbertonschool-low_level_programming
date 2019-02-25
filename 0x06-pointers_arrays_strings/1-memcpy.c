#include "holberton.h"

/**
 * *_memcpy - Function that copies memory area.
 * Description: Copies n bytes from memory area src to memory area dest
 * @dest: Memory space to be changed.
 * @src: Characters to be copied.
 * @n: Number of bytes to be copied.
 * Return: char.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
