#include "main.h"

/**
 * print_last_digit - Computes last digit.
 * @n: The integer to be computed.
 *
 * Return: The last digit value of the integer.
 */
int print_last_digit(int n)
{
	int m;

	m = (n % 10);
	if (m < 0)
	{
		m = (-1 * n);
	}
	_putchar(m + '0');
	return (m);
}
