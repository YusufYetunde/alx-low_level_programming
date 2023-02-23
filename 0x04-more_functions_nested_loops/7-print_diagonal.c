#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int count, row;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 1; count <= n; count++)
		{
			for (row = 1; row < count; row++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
