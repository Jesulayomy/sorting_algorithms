#include "sort.h"

/**
 * insertion_sort_list - sorts a list by insertion algorithm
 * @list: to be sorted  (doubly linked)
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = *list;
	size_t size = 0;

	if (*list || temp->next != NULL)
	{
		while (temp)
		{
			size += 1;
			temp = temp->next;
		}

		temp = *list;
		while (temp->next)
		{
			if (temp->next->n < temp->n)
				swap_till_end(list, &temp->next, size);
			else
				temp = temp->next;
		}
	}
}

/**
 * swap_till_end - continously swaps nodes till the list is done
 * @list: list to modify
 * @element: to shift
 * @size: of the list
 *
 * Return: non
 */
void swap_till_end(listint_t **list, listint_t **element, size_t size)
{
	listint_t *temp = *list, *ptr = *element, *one = NULL, *four = NULL;

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
			print_list(*list);
			break;
		}
		temp = temp->next;
	}

	if (ptr->prev)
	{
		if (ptr->n < ptr->prev->n)
			swap_till_end(list, &ptr, size);
	}
}
