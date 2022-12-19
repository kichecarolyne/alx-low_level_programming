#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string pointer to be passed to the function
 * Return: returns length of the string
 */

int _strlen(char *s)

{
	int c = 0;

	for (; *s++;)
		c++;
	return (c);
}
