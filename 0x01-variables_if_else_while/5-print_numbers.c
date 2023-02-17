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
	for (a = 0; a <= 10; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
