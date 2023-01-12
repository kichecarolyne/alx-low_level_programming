#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer or NULL if error
 */

char *str_concat(char *s1, char *s2)

{
	int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	k = i + j + 1;
	s = malloc(k * sizeof(char));

	if (s == NULL)
	return (NULL);

	for (l = 0; l < i; l++)
	s[l] = s1[l];

	for (l = 0; l < j; l++)
	s[l + i] = s2[l];
	s[i + j] = '\0';
	return (s);
}
