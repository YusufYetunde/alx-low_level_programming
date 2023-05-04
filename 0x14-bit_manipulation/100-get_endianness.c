#include "main.h"
/**
 * get_endianness - function to check endianess
 * Return: Always 0 or 1
 */
int get_endianness(void)
{
	int a = 1;
	char *ptr = (char *)&a;

	return (*ptr == 1);
}
