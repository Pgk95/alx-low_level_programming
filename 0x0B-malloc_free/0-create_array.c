#include "holberton.h"
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
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
