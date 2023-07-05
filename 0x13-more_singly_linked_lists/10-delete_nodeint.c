#include "lists.h"

/**
 * delete_nodeint_at_index - Delete node at nth index
 *
 * @head: Head of node
 *
 * @index: index
 *
 * Return: 1 succeed, -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *next_node;
	unsigned int c;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = prev->next;
		free(prev);
		return (1);
	}

	while (prev != NULL && c < index - 1)
	{
		prev = prev->next;
		c++;
	}
		while (prev == NULL || prev->next == NULL)
		{
			return (-1);
		break;
		}
		next_node = prev->next->next;
		free(prev->next);

		prev->next = next_node;
	return (1);
}
