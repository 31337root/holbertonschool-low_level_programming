#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: Number to be modified.
 * @index: Position to modify the bit to 1.
 * Return: int, success (1), failure (-1).
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= (sizeof(*n) * 8))
	{
		*n |= (1 << index);
		return (1);
	}
	return (-1);
}
