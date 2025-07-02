#include "main.h"

/**
 * puts_half - Function to print half of a string
 * Description: Print the second part of the string
 * @str: String to be processed
 * Return: void
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{}

	if (i % 2 == 0)
		i = (i / 2);
	else
		i = (i + 1) / 2;

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
