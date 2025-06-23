#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function to print a secuence of numbers
 * @a: Reference number
 * Return: Secuence of numbers
*/

void print_to_98(int a)
{
	while (a < 98)
	{
		printf("%d, ", a);
		a++;
	}
	while (a > 98)
	{
		printf("%d, ", a);
		a--;
	}
	if (a == 98)
	{
		printf("%d\n", a);
	}
}
