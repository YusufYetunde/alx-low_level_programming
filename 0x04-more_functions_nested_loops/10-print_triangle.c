#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int count, row, tr;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row <= (size - 1); row++)
		{
			for (count = 0; count < (size - 1) - row; count++)
			{
				_putchar(' ');
			}
			for (tr = 0; tr <= row; tr++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
