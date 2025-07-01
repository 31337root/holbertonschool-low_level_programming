#include "main.h"

/**
 * print_triangle - print an square of spaces and asterisks.
 * Description: Print f number of spaces followed by as number of
 * asterisks.
 * @size: parameter to be processed
 * Return: void.
*/

void print_triangle(int size)
{
	int as;
	int es;
	int f;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (f = 0; f < size; f++)
		{
			for (es = size - f; es > 1; es--)
			{
				_putchar(' ');
			}
			for (as = f; as >= 0; as--)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
