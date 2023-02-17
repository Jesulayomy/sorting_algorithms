#include "sort.h"

/**
 * shell_sort - function that sorts an array of integers in
 * ascending order using the Shell sort algorithm
 * @array: input arrray
 * @size: size of the array
 *
 * Return: no return
 */
void shell_sort(int *array, size_t size)
{
	size_t n = 1;

	/* increase n till it just passes size using knuth sequence */
	while (n < size)
		n = (n * 3) + 1;
	/* 1, 4, _13_, 40, 121, ... */
	/* use the sequence below size as a knuth interval */
	/* 1, _4_, 13, 40, 121, ... */
	while ((n = (n - 1) / 3) > 0)
		_ssort(array, size, n);
}

/**
 * _ssort - auxiliar function for shell_sort function
 * @a: input arrray
 * @size: size of the array
 * @n: interval
 *
 * Return: no return
 */
void _ssort(int *a, int size, int n)
{
	int tmp, i, j;

	/* Insertion sort on the indexes (i.e a[0], a[4], a[8]) */
	for (i = 0; (i + n) < size; i++)
	{
		for (j = i + n; (j - n) >= 0; j = j - n)
		{
			if (a[j] < a[j - n])
			{
				tmp = a[j];
				a[j] = a[j - n];
				a[j - n] = tmp;
			}
		}
	}
	print_array(a, size);
}
