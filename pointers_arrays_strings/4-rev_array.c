#include "main.h"
#include <stdlib.h>

/**
 * *_strncat - Function to concatenate two strings.
 * Description: Concatenate the number of characters given on n.
 * @dest: String to be concatenate.
 * @src: String to be copied.
 * @n: Numer of characters to be copied.
 * Return: char.
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
