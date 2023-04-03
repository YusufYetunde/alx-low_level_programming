#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenght = 0;
	int y;
	listint_t *ptr;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		y = *h - (*h)->next;
		if (y > 0)
		{
			ptr = (*h)->next;
			*h = ptr;
			lenght++;
		}
		else
		{
			*h = NULL;
			lenght++;
			break;
		}
	}
	*h = NULL;
	return (lenght);
}
