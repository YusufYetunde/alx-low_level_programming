#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry level
 *
 * Description: 'Program to print combinarions'
 *
 * Return: Always 0 (succsess)
 */

int main(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
