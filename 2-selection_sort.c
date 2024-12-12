#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: Pointer to an array of integers
 * @size: Number of element in the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, pos;
	int min, swap = 0;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		pos = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				pos = j;
				swap = 1;
			}

		}
		array[pos] = array[i];
		array[i] = min;
		if (swap)
			print_array(array, size), swap = 0;
	}
}
