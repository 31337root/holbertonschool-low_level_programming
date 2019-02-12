#include "holberton.h"

/**
 * print_sign - This function prints the sign of a number
 * @n: value to process
 * Return 1 if is positive, 0 if is zero, -1 if negative
 * Return: Alwais 1 (Success)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n == 0)
	{
		return (0);
		_putchar(48);
	}
	else
	{
		return (-1);
		_putcher(45);
	}
}
