#include "main.h"

/**
 * _puts - Function to print a string.
 * Description: Print every character of str pointer.
 * @str: Parameter to be processed.
 * Return: void.
*/

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
