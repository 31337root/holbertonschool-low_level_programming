#include "main.h"

/**
 * swap_int - swap variables.
 * Description: Interchange parameter a with b and vice versa.
 * @a: Patameter to be processed.
 * @b: Parameter to be processed.
 * Return: void.
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
