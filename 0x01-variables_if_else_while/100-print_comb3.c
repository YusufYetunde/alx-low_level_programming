#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry level
 *
 * Description: 'program tgat print combination'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int c = 0;
	int d = 0;

	while (d < 10)
	{
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	c++;
	d++;
	putchar('\n');
	return (0);
}
