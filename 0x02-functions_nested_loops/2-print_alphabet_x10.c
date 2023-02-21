#include "main.h"
/**
 * *main - Entry level
 *
 * Description: 'funtion print_alphabet_x10'
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int n, c;

	while (c < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		c++;
		_putchar('\n');
	}
}
