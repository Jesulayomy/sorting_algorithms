#ifndef SORT_H_
#define SORT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

int sorted(listint_t **);
void _ssort(int *, int, int);
void heap_sort(int *, size_t);
void shell_sort(int *, size_t);
void quick_sort(int *, size_t);
void merge_sort(int *, size_t);
void swap_nums(int *, int, int);
void bubble_sort(int *, size_t);
void counting_sort(int *, size_t);
void counting_sort(int *, size_t);
void _qsort(int *, int, int, int);
void print_list(const listint_t *);
void selection_sort(int *, size_t);
void msort(int *, int, int, int *);
void print_array(const int *, size_t);
void cocktail_sort_list(listint_t **);
void insertion_sort_list(listint_t **);
void merge(int *, int, int, int, int *);
void print_data(char *, int *, int, int);
void swap_nodes(listint_t **, listint_t **);
void recursion_heap(int *, int, size_t, int);
void swap_till_end(listint_t **, listint_t **, size_t);
void radix_sort(int *array, size_t size);
void print_bitonic(int *arr, int i, int limit);
void sort_up(int *arr, int low, int high);
void sort_down(int *arr, int low, int high);
void recursion(int *, int, int, int bool, size_t);
void bitonic_sort(int *array, size_t size);

#endif
