#include "main.h"
#include <stdlib.h>

/**
 * reverse_array - Function to reverses the content of an array of integers.
 * @a: Array to be reversed.
 * @n: Number of items on array.
 * Return: void
*/

void reverse_array(int *a, int n)
{
	if (a)
	{
		int *temp = (int *)malloc(n * sizeof(int));
		int i, ii;

		ii = 0;

		for (i = n - 1; i >= 0; i--)
		{
			temp[ii] = a[i];
			ii++;
		}
		ii = 0;

		for (i = n - 1; i >= 0; i--)
		{
			a[ii] = temp[ii];
			ii++;
		}
	}

}
