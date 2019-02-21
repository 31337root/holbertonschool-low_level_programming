#include "holberton.h"

/**
 * *_strncpy - 
 * Description: 
 *
 *
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
