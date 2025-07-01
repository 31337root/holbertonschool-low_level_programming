#include "main.h"

/**
 * _strlen - Function to count the length of a string.
 * Description: Will count the number of characters from the input.
 * @s: Parameter to be processed
 * Return: Integer.
*/

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; ++c)
	{}
	return (c);
}
