#include "main.h"

/**
 * times_table - Function that prints the 9 times table.
 * Return: 9 times table.
 *
*/

void times_table(void)
{
	int f, c, m;

	for (f = 0; f < 10; f++)
	{
		for (c = 0; c < 10; c++)
		{
			m = f * c;
			if (m / 10 == 0)
			{
				if (c != 0)
				{
				_putchar(' ');
				}
				_putchar(m % 10 + '0');
			}
			else
			{
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			}
			if (c != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
