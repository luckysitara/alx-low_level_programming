#include "lists.h"

/**
* free_listint_safe - Frees a listint_t list
*
* @h: listint_t double pointer
*
* Return: size_t
*/

size_t free_listint_safe(listint_t **h)
{
	size_t c = 0;
	int c1;
	listint_t *head, *new_node;

	if (*h == NULL)
	{
		return (0);
	}

	head = *h;

	while (head)
	{
		c++;
		c1 = head->next - head;
		new_node = head;
		free(new_node);

		if (c1 >= 0)
		{
			break;
		}
		head = head->next;
	}
	return (c);
}
