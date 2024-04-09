#include "sort.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
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
