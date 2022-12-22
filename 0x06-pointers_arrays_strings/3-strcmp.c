#include "main.h"
#include "stdio.h"
/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: int
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && s2 && s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
