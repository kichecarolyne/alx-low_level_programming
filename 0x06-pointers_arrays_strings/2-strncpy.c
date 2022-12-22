#include "main.h"
/**
 * _strncpy - copies a string
 * @src: the source of strings
 * @dest: the destination of the string
 * @n: the length of int
 * Return: pointer to the resulting string dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && *(src + c); c++)
	{
	*(dest + c) = *(src + c);
	}
	for (; c < n; c++)
	{
	*(dest + c) = '\0';
	}
	return (dest);
}
