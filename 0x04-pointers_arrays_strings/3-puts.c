#include "holberton.h"

/**
 * _puts - Function to print a string.
 * Description: 
 * @str: 
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
