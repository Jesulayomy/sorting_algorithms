#include "sort.h"

/**
 * selection_sort - sorting algorithm
 * @array: to be sorted
 * @size: of the array
 *
 * Return: nothong
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx;
	int temp, select, match = 0;

	for (i = 0; i < size; i++)
	{
		select = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < select)
			{
				select = array[j];
				idx = j;
				match = 1;
			}
		}
		if (match == 1)
		{
			temp = array[i];
			array[i] = select;
			array[idx] = temp;
			print_array(array, size);
			match = 0;
		}
	}
}
