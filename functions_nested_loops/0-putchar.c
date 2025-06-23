#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int count = 0;
	char let[9] = "_putchar\n";

	for (count = 0; count <= 8; count++)
	{
		_putchar(let[count]);
	}
	return (0);
}
