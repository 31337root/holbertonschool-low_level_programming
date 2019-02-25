#include "holberton.h"

/**
 * *_memset - Function that fills memory with a constant byte.
 * Description: Fills the first n bytes of the memory area pointed
 * to by s with the constant byte b.
 * @s: Memory area to be changed.
 * @b: Character to write in the selected memory area.
 * @n: Number of bytes to fill.
 * Return: char.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}
