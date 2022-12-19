#include "main.h"
/**
 * _strcpy - copys the string pointed to by src to dest
 * @dest: char to check
 * @src: char to check
 * Return: void
 */

char *_strcpy(char *dest, char *src)

{
	int c;

	for (a = 0; src[a] != '\0'; c++)
	dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
