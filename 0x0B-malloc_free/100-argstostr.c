#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of a program
 * @ac: number of arguments
 * @av: double pointer to arguments
 *
 * Return:pointer to new string, or NULL if error
 */

char *argstostr(int ac, char **av)

{
	int i = 0, j = 0, k = 0, n = 0;
	char *s;

	if (ac == 0 || av == NULL)
	return (NULL);

	while (i = 0; i < ac; i++)
	{
	while (j = 0; av[i][j]; j++)
	n++;
	n++;
	}
	n++;
	s = malloc(n * sizeof(char));
	if (s == NULL)
	return (NULL);
	while (i = 0; i < ac; i++)
	{
	while (j = 0; av[i][j]; j++)
	{
	s[k] = av[i][j];
	k++;
	}
	s[k] = '\n';
	k++;
	}
	s[k] = '\0';
	return (s);
}
