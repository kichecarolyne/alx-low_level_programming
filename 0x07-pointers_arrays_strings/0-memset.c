#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 * @n: bytes of the memory area pointed to
 * @s: pointer
 * @b: memory area pointer
 *
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int c = 0;

	while (c < n)
	{
	s[c] = b;
	c++;
	}
	return (s);
}
