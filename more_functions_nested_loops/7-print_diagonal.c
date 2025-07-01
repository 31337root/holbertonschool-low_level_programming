#include "main.h"

/**
 * print_diagonal - Function to print slashes declared on n.
 * Description: print a vertical line using spaces.
 * @n: Number of slashes to be print.
 * Return: void.
*/

void print_diagonal(int n)
{
	int c;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			for (s = 0; s < c; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
