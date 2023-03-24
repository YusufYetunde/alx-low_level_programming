#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - sum of all its parameters
* @n: n args
* Return: sum or if n == 0, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list my_list;
	unsigned int c;
	int sum;

	if (n == 0)
		return (0);
	va_start(my_list, n);
	sum = 0;
	for (c = 0; c < n; c++)
		sum += va_arg(my_list, int);
	va_end(my_list);
	return (sum);
}
