#include "main.h"

/**
 * print_last_digit - print the las digit of a number
 * @num: value to process
 * Return: the remainder of the variable
 *
*/

int print_last_digit(int num)
{
	num = num % 10;

	if (num < 0)
	{
		num = num * -1;
	}
	_putchar(num + '0');
	return (num);
}
