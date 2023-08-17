#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0; /* Step 1: Initialize node_count to 0.*/

	while (h != NULL) /* Step 2: Traverse the list using a loop.*/
	{
		printf("%d\n", h->n); /* Step 3: Print the value of the current node.*/
		h = h->next; /* Step 4: Move to the next node.*/
		node_count++; /* Step 5: Increment the node_count.*/
	}

	return node_count; /* Step 7: Return the total number of nodes.*/
}

