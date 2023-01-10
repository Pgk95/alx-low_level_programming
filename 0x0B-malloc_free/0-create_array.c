#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of both chars, and initializes
 * with specific char.
 * @c: char to intilizes
 * @size: number of bytes to allocate in the memory
 *
 * Return: a pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	/* check if allocation was successful */

	if
		(arr == NULL)
			return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
