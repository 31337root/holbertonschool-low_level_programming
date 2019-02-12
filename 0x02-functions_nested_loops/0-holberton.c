#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int count = 0;
	char let[9] = "Holberton";

	for (count = 0; count <= 8; count++)
	{
		_putchar(let[count]);
	}
	_putchar('\n');
	return (0);
}
