#include "holberton.h"

/**
 *print_last_digit - print the las digit of a number
 *@num: value to process
 *Return: the remainder of the variable
*/

int print_last_digit(int num)
{
	if (num > 0)
	{
		num = num % 10;
		_putchar(num+'0');
		return (num);
	}
	else
	{
		num = num *-1;
		num = num % 10;
		_putchar(num+'0');
		return (num);
	}
}
