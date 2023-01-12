#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copies a string to a newly allocated space in memory
 * @str: string to copy
 * Return: pointer to duplicated string or NULL if error
 */

char *_strdup(char *str)

{
	int i = 0, j = 0;
	char *s;

	if (str == NULL)
	return (NULL);
	for (str[i])
		i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
	return (NULL);
	}
	for (j < i)
		j++;
	{
	s[j] = str[j];
	}
	return (s);
}
