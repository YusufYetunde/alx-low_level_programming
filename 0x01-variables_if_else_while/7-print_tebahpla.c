#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry level
 *
 * Description: 'Program to print in reverse'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c = '2';

	while (c >= 'y')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
