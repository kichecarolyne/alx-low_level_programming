#include <stdio.h>
#include "main.h"
/**
 * main - prints largest prime factors of 612852475143
 * Return: Always 0
 */

int main(void)

{
	unsigned long int c, n = 612852475143;

	for (c = 3; c < 782849; c = c + 2)
	{
	while ((n % c == 0) && (n != c))
	n = n / c;
	}
	printf("%lu\n", n);
	return (0);
}
