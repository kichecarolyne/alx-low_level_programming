#include "main.h"
/**
 * more_numbers - prints the numbers 0 t0 14 ten times
 */

void more_numbers(void)

{
	int c, d;

	for (c = 0; c <= 10; c++)
	{
	for (d = 0; d <= 15; d++)
	{
	_putchar (d + '0');
	}
	_putchar('\n');
}
