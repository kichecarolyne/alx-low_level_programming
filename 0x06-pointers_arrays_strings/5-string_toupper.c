#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @s: string
 * Return: char
 */

char *string_toupper(char *s)

{
	int c;

	i = 0;
	while (*(s + c))
	{
	if (*(s + c) >= 'a' && *(s + c) <= 'z')
	*(s + c) -= 'a' - 'A';
	c++;
	}
	return (s);
}
