#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: char to fill in the array
 *
 * Return: The array filled
 */

char *create_array(unsigned int size, char c)

{
	char *p;
	unsigned int i;

	if (size == 0)
	return (NULL);
	p = malloc(size * sizeof(char));
	if (p == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	p[i] = c;
	}
	return (p);
}
