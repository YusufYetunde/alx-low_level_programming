#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Function to delete a node at a given position
 * @head: First node address
 * @index: Position of the node to be deleted
 * Return: If success (1) otherwise (-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *first, *second;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		second = (*head)->second;
		free(*head);
		*head = second;
		return (1);
	}
	first = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (first->second == NULL)
			return (-1);
		first = first->second;
	}
	second = first->second;
	first->second = second->second;
	free(second);
	return (1);
}
