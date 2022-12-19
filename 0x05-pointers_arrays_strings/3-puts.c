#include "main.h"
/**
 * _puts - prints a string\n to stdout
 * @str: the string
 * Return: returns the length of the string
 */

void _puts(char *str)

{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');

}
