#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry level
 *
 * Description: 'Program  to print lowercase'
 *
 * Return: Alwats 0 (success)
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
