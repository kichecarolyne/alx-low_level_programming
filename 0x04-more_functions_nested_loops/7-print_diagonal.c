#include "main.h"
/**
 * print_diagonal - print slash
 * @n: param
 */

void print_diagonal(int n)

{
	int c, d;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (c = 0; c < n; c++)
	{
	for (d = 0; d < n; d++)
	{
	_putchar(32);
	}
	_putchar(98);
	_putchar('\n');
	}
	}
}
