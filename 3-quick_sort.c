#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/*
 * swap - Swaps two elements in an array.
 * @array: The array to swap elements in.
 * @i: Index of the first element.
 * @j: Index of the second element.
 *
 * Description: This function swaps the elements at indices `i` and `j` in
 * the provided array, effectively changing their positions.
 */
void swap(int *array, int i, int j)
{
	int temp = array[i];

	array[i] = array[j];
	array[j] = temp;
}

/**
 * lomuto_partition - Partitions the array using Lomuto's method.
 * @array: The array to partition.
 * @low: Starting index.
 * @high: Ending index.
 *
 * Return: The pivot index after partitioning.
 */
int lomuto_partition(int *array, int low, int high)
{
	int pivot = array[high];  /* Pivot is the last element */
	int i = low - 1;          /* Index of smaller element */
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(array, i, j);  /* Swap elements */
			print_array(array, high + 1);  /* Print after each swap */
		}
	}

	swap(array, i + 1, high);  /* Place pivot in correct position */
	print_array(array, high + 1);  /* Print after placing pivot */
	return (i + 1);  /* Return pivot index */
}

/**
 * quick_sort_recursive - Recursively sorts the array using Quick Sort.
 * @array: The array to sort.
 * @low: Starting index.
 * @high: Ending index.
 */
void quick_sort_recursive(int *array, int low, int high)
{
	if (low < high)
	{
		int pivot_index = lomuto_partition(array, low, high);  /* Partition */

		quick_sort_recursive(array, low, pivot_index - 1);     /* Sort left */
		quick_sort_recursive(array, pivot_index + 1, high);    /* ort right */
	}
}

/**
 * quick_sort - Sorts an array using Quick Sort.
 * @array: The array to sort.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1);  /* Start the sorting */
}
