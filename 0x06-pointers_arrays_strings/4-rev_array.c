#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: integer
 */

void reverse_array(int *a, int n)

{
	int c, d;

	for (c = 0; (c < (n - 1) / 2); c++)
	{
	d = a[c];
	a[c] = a[n - 1 - c];
	a[n - 1 - c] = d;
	}
}
