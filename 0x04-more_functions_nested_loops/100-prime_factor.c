#include "main.h"
/**
 * main - prints prime factors
 * Return: 0
 */

int main(void)

{
	unsigned long int c = 3, n = 612852475143;

	for (; c < 12057; c += 2)
	{
	while (n % c == 0 && n != c)
	n /= c;
	}
	printf("%lun", n);
	return (0);
}
