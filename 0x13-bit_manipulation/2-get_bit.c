#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: Number to be analyzed.
 * @index: The position where look for a bit.
 * Return: The (@bit) in a given position (index) if success, filure (-1).
 *
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index <= (sizeof(n) * 8))
	{
		bool bit = n & (1 << index);

		return (bit);
	}
	return (-1);
}
