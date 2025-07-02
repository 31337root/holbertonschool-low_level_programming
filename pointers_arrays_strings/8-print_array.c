#include <stdio.h>
#include "main.h"

/**
 * print_array - Function to print certain number of integers of an array
 * @*a: Pointer to array to be printed
 * @n: Length to be printed
 * Return: void.
*/

void print_array(int *a, int n)
{
	if (n > 0)
	{
		int i;
		n = n - 2;

		for (i = 0; i <= n; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[i]);
	}
}
