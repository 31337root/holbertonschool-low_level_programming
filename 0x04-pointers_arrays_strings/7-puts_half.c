#include "holberton.h"

/**
 * puts_half - Function to print half of a string.
 * Description: Print the second part of the string.
 * @str: String to be processed.
 * Return: void.
*/

void puts_half(char *str)
{
	int c, hal;

	for (c = 0; str[c] != '\0'; c++)
	{
	}

	hal = c / 2;

	for (hal = c / 2; hal <= c; hal++)
	{
		_putchar(str[hal]);
	}
	_putchar('\n');
}
