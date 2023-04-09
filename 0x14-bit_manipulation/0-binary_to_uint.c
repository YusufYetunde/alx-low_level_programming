#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Function to print binary
 * @b: point to string 0 and 1
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int count = 0;

	if (b == NULL)
		return (0);
	while (b[count] != '\0')
	{
		if (b[count] == '0')
		{
			num <<= 1;
		}
		else if (b[count] == '1')
		{
			num = (num << 1) | 1;
		}
		else
		{
			return (0);
		}
		count++;
	}
	return (num);
}
