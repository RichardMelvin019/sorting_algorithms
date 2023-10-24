#include "sort.h"

/**
 * swap - Swaps two integers in an array.
 * @a: The 1st integer to swap.
 * @b: The 2nd integer to swap.
 */
void swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}


