#include "main.h"

/**
 * print_rev - Function to print in reverse a string.
 * Description: Reverse the characters of the string *s.
 * @s: Argument to be processed.
 * Return: void.
*/

void print_rev(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; ++l)
	{}
	while (l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
