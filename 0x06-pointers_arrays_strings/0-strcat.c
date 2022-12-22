#include "main.h"
/**
 * _strcat - appends the src string to the dest string
 * overwrites the terminating null byte (\0) at the end of the dest
 * adds a terminating null byte
 * @dest: char
 * @src: char
 * Return: pointer to the resulting string dest
 */


char *_strcat(char *dest, char *src)

{
	char *s = dest;

	while (*dest != '\0')
	{
	dest++;
	}
	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
	return (s);
}
