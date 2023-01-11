#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: char to fill in the array
 *
 * Return: The aaray filled
 */

char *create_array(unsigned int size, char c);

{
	unsigned int i;
	char *s;

	if (size == 0)
	return (NULL);
	S = malloc(Size * sizeof(char));
	if (s == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	{
	s[i] = c;
	}
	return (s);
}
