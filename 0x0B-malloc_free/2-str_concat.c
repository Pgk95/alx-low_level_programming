#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatnates 2 strings
 * a null string is treated as an empty str.
 * @s1: pointer to string.
 * @s2: pointer to string.
 *
 * Return: pointer to newly allocated memory which
 * has s1, s2 and NULL byte.
 * NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, size, i, j;
	char *nstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	size = len1 + len2;

	nstr = malloc((sizeof(char) * size) + 1);
	/*checks if alocation was successful*/
	if (nstr == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		nstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i <= size)
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	return (nstr);
}