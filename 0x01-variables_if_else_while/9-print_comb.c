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

	while (a < 10)
	{
		putchar(48 + a);
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	return (0);
}
