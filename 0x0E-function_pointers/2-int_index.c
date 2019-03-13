#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: Array of numbers to be matched.
 * @size: Size of the array.
 * @cmp: Address of the funciton.
 * Return: int.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		index = cmp(array[i]);

		if (index != 0)
		{
			return (i);
		}
	}
	return (index);
}
