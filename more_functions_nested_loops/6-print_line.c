#include "main.h"

/**
 * print_line - print the number of underscore declared on n.
 * Description: Print underscore the times declaredn on n.
 * @n: Parameter to be processed
 * Return: void.
*/

void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
