#include "main.h"
#include <stdio.h>
/**
 *main - check the code
 * Return: Always 0
 */

int main(void)

{
	char *s = "hello";
	char *c;

	c = _strchr(s, 'l');
	if (c != NULL)
	{
	printf("%s\n", c);
	}
	return (0);
}
