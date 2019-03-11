#include <stdlib.h>
#include "holberton.h"

/**
 * *malloc_checked - function thats allocates memory using malloc.
 * @b: Number of memory spaces to be allocated.
 * Return: void.
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *temp;

	temp = malloc(b);

	if (temp == NULL)
	{
		exit(98);
	}

	return (temp);
}
