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
void shell_sort(int *, size_t);
void quick_sort(int *, size_t);
void merge_sort(int *, size_t);
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
void swap_till_end(listint_t **, listint_t **, size_t);

#endif
