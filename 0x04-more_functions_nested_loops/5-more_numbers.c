#include "main.h"
/**
 * more_numbers - prints the numbers 0 t0 14 ten times
 */

void more_numbers(void)

{
	int c, d;

	c = 0;

	while (c < 10)
	{
	for (d = 0; d < 15; d++)
	{
	if (d >= 10)
	{
	_putchar((d / 10) + 48);
	}
	_putchar((d % 10) + 48);
	}
	_putchar('\n');
	c++;
	}
}
