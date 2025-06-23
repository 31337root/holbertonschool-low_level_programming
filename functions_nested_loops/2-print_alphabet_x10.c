#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
*/

void print_alphabet_x10(void)
{
	int count = 0;

	while (count <= 9)
	{
		int alp;

		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
		count++;
	}
}
