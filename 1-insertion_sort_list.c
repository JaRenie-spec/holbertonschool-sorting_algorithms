#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm.
 *
 * @list: Pointer to the head of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

/* Check if the list or its head is NULL */
	if (!list || !(*list) || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		temp = current;
		/* Move the 'temp' node backwards until it's in the correct position */
		while (temp->prev && temp->n < temp->prev->n)
		{
			/* Swap nodes */
			temp->prev->next = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;

			temp->next = temp->prev;
			temp->prev = temp->next->prev;
			temp->next->prev = temp;

			/* If we swapped the head, we need to adjust the head of the list */
			if (!temp->prev)
				*list = temp;

			print_list(*list); /* Print list after each swap */
		}

		current = current->next;
	}
}
