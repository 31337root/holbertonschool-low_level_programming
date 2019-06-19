#include "sort.h"

/**
 * bubble_sort - Function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm.
 * @array: Array to be sorted.
 * @size: Size of the array.
 * Return: void,
*/

void bubble_sort(int *array, size_t size)
{

	int trigger, temp;
	size_t i;

	while (array && size > 2)
	{
		trigger = 0;

		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				print_array(array, size);
				trigger = 1;
			}
		}
		if (trigger == 0)
			break;
	}
}
