#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry level
 *
 * Description: 'program to print in base 10'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c = 'a';

	char b = 0;

	while (b < 10)
	{
		putchar(b + '0');
			b++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
