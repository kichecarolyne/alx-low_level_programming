#include "main.h"
/**
 * cap_string - capitalizes all words in a string
 * @x: string
 * Return: capital version of the string
 */

char *cap_string(char *s)

{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len = 13;
	int a = 0, i;

	while (x[a])
	{
	i = 0;
	while (i < len)
	{
	if ((a == 0 || x[a - 1] == spc[i]) && (x[a] >= 97 && x[a] <= 122))
	x[a] = x[a] - 32;
	1++;
	}
	a++;
	}
	return (x);
}
