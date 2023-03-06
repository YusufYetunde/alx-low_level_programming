#include "main.h"
/**
 * _memcpy - Entry level
 * @n: size
 * @dest: pointer of char params
 * @src: pointer of char params
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = scr[i];
	}
	return (dest);
}
