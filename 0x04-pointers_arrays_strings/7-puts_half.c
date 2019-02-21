#include "holberton.h"

/**
 * puts_half - Function to print half of a string.
 * Description: Print the second part of the string.
 * @str: String to be processed.
 * Return: void.
*/

void puts_half(char *str)
{
	int  leng, c;

	for (leng = 0; str[leng] != '\0'; leng++)
	{}
	c = leng;
	if (((leng) % 2) == 0)
	{
		for (leng = leng / 2; leng <= c; leng++)
		{
		_putchar(str[leng]);
		}
	}
	else
	{
		c = (c + 1) / 2;
		_putchar(c + 48);
	}
	_putchar('\n');
}
