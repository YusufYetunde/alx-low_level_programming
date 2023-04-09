#include "main.h"
/**
 * get_endianess - function that check endianess
 * Return: Always 1
 */
int get_endianness(void)
{
	int a = 1;
	char *ptr = (char *)&a;

	return (*ptr == 1);
}
