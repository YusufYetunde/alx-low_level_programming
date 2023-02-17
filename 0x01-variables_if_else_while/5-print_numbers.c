#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry level
 *
 * Descriptiom: 'Program to print single digits'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char a;

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
