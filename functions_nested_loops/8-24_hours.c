#include "main.h"

/**
 * jack_bauer - prints the whole minutes of the long day of Jack
 * Return: The whole minutes of the long day of Jack
 *
*/


void jack_bauer(void)
{
	int hor;
	int min;

	for (hor = 0; hor < 24; hor++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hor / 10 + 48);
			_putchar(hor % 10 + 48);
			_putchar(58);
			_putchar(min / 10 + 48);
			_putchar(min % 10 + 48);
			_putchar('\n');
		}
	}
}
