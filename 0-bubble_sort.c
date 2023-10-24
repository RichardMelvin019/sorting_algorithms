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
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array
 * @size: size of array
 * Return: void
*/
void bubble_sort(int *array, size_t size)
{
	size_t x, lenght = size;
	bool bubble = false;

	if (array == NULL || size < 2)
		return;

	while (bubble == false)
	{
		bubble = true;
		for (x = 0; x < lenght - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				swap(array + x, array + x + 1);
				print_array(array, size);
				bubble = false;
			}
		}
		lenght--;
	}
}
