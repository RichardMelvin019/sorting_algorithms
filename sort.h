#ifndef _HEADER_
#define _HEADER_

#include <stdio.h>
#include <stdlib.h>

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

/**
 * enum bool - Enumeration of Boolean values.
 * @false: Equals 0.
 * @true: Equals 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;

/* Printing Functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Sorting algorithm Functions */
void bubble_sort(int *array, size_t size);
void swap(int *a, int *b);
void insertion_sort_list(listint_t **list);
void node_swap(listint_t **head, listint_t **node1, listint_t *node2);

#endif
