#include "search_algos.h"
/**
 * linear_search - searches linear
 * @array: array to search
 * @size: size to go through
 * @value: value to search?
 * Return: int value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
