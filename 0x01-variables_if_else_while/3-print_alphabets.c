#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry level
 *
 * Description: 'Program to print alphabet lowercase'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	putchar('\n');
	return (0);
}
