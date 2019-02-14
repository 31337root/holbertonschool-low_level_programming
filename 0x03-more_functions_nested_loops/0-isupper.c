#include "holberton.h"

/*
 * _isupper - Function that return 1 if upper, 0 else
 *
 * @c: Variable to be processed
*/

int _isupper(int c)
{
	if (c > 65 || c < 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
