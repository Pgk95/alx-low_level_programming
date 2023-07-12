#include "search_algos.h"

/**
 * linear_search - iterate through lists  it to find the value
 *
 * @array: A pointer to the first element.
 * @size: The number of elements in the array.
 * @value: to search the value that has been requested.
 *
 * Return: if NULL, -1 otherwise i where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
