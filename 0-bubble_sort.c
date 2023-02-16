#include "sort.h"

/**
 * bubble_sort - sorting algorithm with constant sort time
 * @array: to be sorted
 * @size: of the array
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, k, temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
		for (k = 0; k < size; k++)
		{
			printf("%d", array[k]);
			if (k != size - 1)
				printf(", ");
		}
		printf("\n");
	}
}
