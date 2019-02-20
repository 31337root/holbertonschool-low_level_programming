#include "holberton.h"

/**
 * puts2 - Prints out of 2 of a string.
 * Description: Prints the pair numbers.
 * @str: String to be processed.
 * Return: void.
*/

void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if ((str[c] % 2) == 0 || c == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
