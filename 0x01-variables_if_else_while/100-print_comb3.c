#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: ''
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	for (j = i + 1; j < 10; j++)

		{
		putchar((i % 10) + '0');
		putchar((j % 10) + '0');

		if (i == 5 && j == 6)
			continue;
		putchar(',');
		putchar(' ');
		}
	putchar('\n');
	return (0);
}
