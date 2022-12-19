#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed in reverse
 */

void print_rev(char *s)

{
	int c, d;

	d = 0;
	while (s[d] != '\0')
		d++;

	for (c = d - 1; c >= 0; c--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

