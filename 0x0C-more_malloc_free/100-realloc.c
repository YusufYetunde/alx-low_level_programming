#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc
 * @ptr: pointer to the memory previously allocated memory
 * @old_size: size in bytes allocated for ptr
 * @new_size: size in bytes of new memory block
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (nptr);
		for (i = 0; i < old_size; i++)
			nptr[i] = *((char *)ptr + 1);
		free(ptr);
	}
	return (nptr);
}
