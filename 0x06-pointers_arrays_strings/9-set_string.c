#include "holberton.h"

/**
 * set_string - Function that sets the value of a pointer to a char.
 * @s: Value to be changed.
 * @to: Value for change.
 * Return: void.
*/

void set_string(char **s, char *to)
{
	*s = to;
}
