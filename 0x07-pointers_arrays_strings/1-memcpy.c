#include "main.h"
/**
 * _memcpy - function copies n bytes from memory area src
 * to memory area dest
 * @n: function copies
 * @src: bytes from memory area
 * @dest: to memory area
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int c = 0;

	while (c < n)
	{
	dest[c] = src[c];
	c++;
	}
	return (dest);
}