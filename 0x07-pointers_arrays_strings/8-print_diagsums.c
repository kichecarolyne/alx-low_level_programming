#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: input
 * @size: input
 * Return: void
 */

void print_diagsums(int *a, int size)

{
	int c, d, k, l = 0, r = 0;

	for (c = 0; c < size; c++)
	{
	k = (c * size) + c;
	l += *(a + k);
	}
	for (d = 0; d < size; d++)
	{
	k = (d * size) + (size - 1 - d);
	r += *(a + k);
	}
	printf("%c, %c\n, l, r")
}
