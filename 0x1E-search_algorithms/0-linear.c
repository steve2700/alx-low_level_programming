#include "search_algos.h"
/**
 * linear_search - searches for a value in an array using linear search algo
 * @array: pointer to first element to search in array
 * @size: number of elements in array
 * @value: value to search for
 * Return: int or -1 if value is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
