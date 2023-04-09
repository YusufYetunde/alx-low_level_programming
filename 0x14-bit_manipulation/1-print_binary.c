#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int bit_count = 0;

	while (mask > 0)
	{
		_putchar(((n & mask) == mask) ? '1' : '0');
		mask >>= 1;
		++bit_count;
		if (bit_count % 4 == 0)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}
