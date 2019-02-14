#include "holberton.h"

/**
 * print_square - Function that print and square made by #.
 * Description: Print the number of # declarated onf size.
 * @size: Parameter to be processed
 * Return: void.
*/

void print_square(int size)
{
	int c;
	int f;

	for (f = 0; f < size; f++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
