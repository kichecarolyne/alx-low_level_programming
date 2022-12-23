#include "main.h"
/**
 * print_square - prints square
 * @size: param
 */

void print_square(int size)

{
	int c = 0, d;

	if (size > 0)
	{
	for (; c < size; c++)
	{
	for (d = 0; d < size; d++)
	_putchar(35);
	_putchar('\n');
	}
	}
	else
	_putchar('\n');
}
