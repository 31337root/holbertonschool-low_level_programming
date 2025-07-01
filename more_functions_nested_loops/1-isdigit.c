#include "main.h"

/**
 * _isdigit - Function that return 1 if is a digit, otherwise 0.
 * Description: If c is between 0 and 9 return 1 otherwise 0.
 * @c: Value to process.
 * Return: integer.
*/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
