#include <stddef.h>

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array.
 * @array: the array.
 * @size: number of element in the array.
 * @action: the function to be called.
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size < 1 || action == NULL)
		return;

	for (i = 0; i < size; i++)
		(*action) (array[i]);
}
