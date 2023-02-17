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

	while (a <= 5)
	{
		putchar(a + '0');
		a++;
		putchar(',');
		putchar(' ');
	}
	return (0);
}
