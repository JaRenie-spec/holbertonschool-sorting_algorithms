#include "sort.h"

/**
 * swap - Swaps the values of two elements in an array.
 * @array: The array of integers.
 * @size: The size of the array.
 * @left: The index of the left element.
 * @right: The index of the right element.
 */
void swap(int *array, size_t size, int left, int right)
{
	if (array[left] != array[right])
	{
		int temp = array[left];

		array[left] = array[right];
		array[right] = temp;
		print_array(array, size);
	}
}

/**
 * sort - sort the array
 * @array: The array to sort
 * @size: The size of the array
 * @left: The index of the start
 * @right: The index of the end
 * Return: The index
 */
int sort(int *array, size_t size, int left, int right)
{
	int partition_value = array[right];
	int i = left;
	int j = left;

	for (; j < right; j++)
	{
		if (array[j] <= partition_value)
		{
			swap(array, size, i, j);
			i++;
		}
	}

	swap(array, size, i, right);
	return (i);
}

/**
 * recursion - Recursive function for quicksort.
 * @array: The array to sort.
 * @size: The size of the array.
 * @left: The index of the start of the sublist.
 * @right: The index of the end of the sublist.
 */

void recursion(int *array, size_t size, int left, int right)
{
	if (left < right)
	{
		int partition_index = sort(array, size, left, right);

		recursion(array, size, left, partition_index - 1);
		recursion(array, size, partition_index + 1, right);
	}
}

/**
 * quick_sort - function that sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: The array to sort.
 * @size: The size of the array.
 */

void quick_sort(int *array, size_t size)
{
	if (array && size > 1)
	{
		recursion(array, size, 0, size - 1);
	}
}
