#include "main.h"
/**
 * main - Entry level
 * Description: 'print_alphabet to print lowercase'
 * Return: Always  0 (approve)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
