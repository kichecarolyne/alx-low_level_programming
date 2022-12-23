#include "main.h"
/**
 * print_diagonal - print slash
 * @n: param
 */

void print_diagonal(int n)

{
	int c = 0;
	int d;

	if (n > 0)
	{
	for (; c < n; c++)
	{
	for (d = 0; d < c; d++)
	{
	_putchar('');
	}
	_putchar(92);
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
