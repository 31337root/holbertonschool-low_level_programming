#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: Number to be modified.
 * @index: Position to modify the bit to 0.
 * Return: If success (1), failure (.1)
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index <= (sizeof(*n) * 8))
	{
		*n &= ~(1 << index);
		return (1);
	}
	return (-1);
}
