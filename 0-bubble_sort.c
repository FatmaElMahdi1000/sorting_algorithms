#include "sort.h"

/**
 *bubble_sort - Bubble sort algorithm
 *@array: the array
 *@size: size or length of the array
 *
**/

void bubble_sort(int *array, size_t size)
{
	for (int i = 0; i < size ; i++)
	{
		for (int j = 0; j < size - 1; j++)

	{
		if (array[j] > array[j + 1])
	{
		int temp = array[j];

		array[j] = array[j + 1];
		array[j + 1] = temp;
	}
	}
	}
	for (int i = 0; i < size; i++)
	{
		print_array(array, size);
	}

	return (0);
}
