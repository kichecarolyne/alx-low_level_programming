#include "main.h"
/**
 * _strcpy - copys the string pointed to by src to dest
 * @dest: char to check
 * @src: char to check
 * Return: void
 */

char *_strcpy(char *dest, char *src)

{
	char c;

	for (c = 0; src[c] != '\0'; c++)
	dest[c] = src[c];
	dest[c] = '\0';
	return (dest);
}
