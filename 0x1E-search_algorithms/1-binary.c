#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t middle, left, right;

	if (array == NULL || size < 1)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		middle = (left + right) / 2;
		print_sub_array(array, left, right);

		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}

	return (-1);
}

/**
 * print_sub_array - print elements in a sub array.
 *
 * @array: the array
 * @start: where to start printing
 * @end: where the printing ends
 */
void print_sub_array(int *array, size_t start, size_t end)
{
	size_t i = start;

	printf("Searching in array: ");

	while (i <= end)
	{
		if (i == start)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);

		i++;
	}

	printf("\n");
}
