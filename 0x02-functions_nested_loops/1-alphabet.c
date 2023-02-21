#include "main.h"

/**
 * print_alphabet - Prints 10 times the alphabet, in lowercase.
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
