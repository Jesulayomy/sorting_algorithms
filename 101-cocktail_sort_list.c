#include "sort.h"

/**
 * cocktail_sort_list - sorts a double linked list by bubblesort
 * @list: a doubly linked list to sort
 *
 * Return: nothing
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *temp = *list;
	int st = 0, size, bound = 0, limit = 0;

	if (temp != NULL && temp->next != NULL)
	{
		for (size = 0; temp; size++)
			temp = temp->next;
		temp = *list;
		while (st == 0)
		{
			while (temp->next && (size - limit) - bound != 1)
			{
				if (temp->n > temp->next->n)
				{
					swap_nodes(list, &temp->next);
					print_list(*list);
				}
				else
					temp = temp->next;
				limit += 1;
			}
			while (temp->prev && limit - bound != 0)
			{
				if (temp->n < temp->prev->n)
				{
					swap_nodes(list, &temp);
					print_list(*list);
				}
				else
					temp = temp->prev;
				limit -= 1;
			}
			bound += 1;
			st = sorted(list);
		}
	}
}

/**
 * swap_nodes - swaps a node with the previous one
 * @list: the original list
 * @n: pointer to the node to swap
 * Return: nothing
 */
void swap_nodes(listint_t **list, listint_t **n)
{
	listint_t *one = NULL, *four = NULL, *ptr = *n;
	listint_t *temp = *list;

	while (temp)
	{
		if (temp->next == ptr)
		{
			if (temp->prev)
			{
				one = temp->prev;
				one->next = ptr;
				ptr->prev = one;
			}
			else
			{
				ptr->prev = NULL;
				*list = ptr;
			}
			if (ptr->next)
			{
				four = ptr->next;
				temp->next = four;
				four->prev = temp;
			}
			else
				temp->next = NULL;

			ptr->next = temp;
			temp->prev = ptr;
			break;
		}
		temp = temp->next;
	}
}

/**
 * sorted - checks if a linked list is sorted
 * @list: to check
 * Return: 0 if not sorted, 1 if sorted
 */
int sorted(listint_t **list)
{
	listint_t *temp = *list;

	while (temp->next)
	{
		if (temp->n > temp->next->n)
			return (0);
		temp = temp->next;
	}
	return (1);
}
