#include "main.h"
/**
 * print_triangle - creates a triangle
 * @size: param
 */

void print_triangle(int size)

{
	int c = 0, d, n = size - 1;

	if (size > 0)
	{
	for (; c < size; c++)
	{
	for (d = 0; d < size; d++)
	{
	if (d < n)
	_putchar(' ');
	else
	_putchar('#');
	}
	n--;
	_putchar('\n');
	}
	}
	else
	_putchar('\n');
}
