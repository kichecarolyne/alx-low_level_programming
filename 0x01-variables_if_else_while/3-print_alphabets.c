#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'print lowercase followed by uppercase letters'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z')
		{
		putchar(c);
		++c;
		}
	while
		(d <= 'Z')
		{
		putchar(c);
		d++;
		}
		putchar('\n');
		return (0);
}
