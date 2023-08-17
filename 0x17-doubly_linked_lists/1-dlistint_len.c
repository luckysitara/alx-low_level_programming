#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;
    /* Step 1: Initialize node_count to 0.*/

	while (h != NULL) 
	    /* Step 2: Traverse the list using a loop.*/
	{
		node_count++;
/* Step 3: Increment the node_count.*/
		h = h->next; 
/* Move to the next node.*/
	}

	return node_count;
/* Step 5: Return the total number of nodes.*/
}
