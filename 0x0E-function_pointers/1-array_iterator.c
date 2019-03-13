#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter on
 * each element of an array.
 * @array: Array of numbers.
 * @size: Size of the array.
 * @action: Adsress of function,
 * Return: Void.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
