#include "holberton.h"

/**
 * _isupper - Function that return 1 if upper, otherwise 0.
 * Description: If c is between A and Z return 1 otherwise 0.
 * @c: Variable to be processed
 * Return: integer.
*/

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
