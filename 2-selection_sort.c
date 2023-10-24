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

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: array
 * @size: size of array
*/
void selection_sort(int *array, size_t size)
{
	int *minimum;
	size_t x, j;

	if (array == NULL || size < 2)
		return;

	for (x = 0; x < size - 1; x++)
	{
		minimum = array + x;
		for (j = x + 1; j < size; j++)
			minimum = (array[j] < *minimum) ? (array + j) : minimum;

		if ((array + x) != minimum)
		{
			swap(array + x, minimum);
			print_array(array, size);
		}
	}
}
