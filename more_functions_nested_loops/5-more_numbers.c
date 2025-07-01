#include "main.h"

/**
 * more_numbers - Function to print the numbers between 0 and 14
 * Return: void
*/

void more_numbers(void)
{
	int c;
	int n;

	for (c = 0; c < 10; c++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n / 10 > 0)
			{
			_putchar(n / 10 + 48);
			}
			_putchar(n % 10 + 48);
		}
	_putchar('\n');
	}
}
