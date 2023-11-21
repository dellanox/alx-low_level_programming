#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of
 * integers using the Linear search algorithm.
 * @array: Pointer to the first element of the array
 * to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: (-1)
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t IDX;

	if (array == NULL)
	{
		return (-1);
	}
	for (IDX = 0; IDX < size; IDX++)
	{
		printf("Value checked array[%ld] = [%d]\n", IDX, array[IDX]);
		if (array[IDX] == value)
		{
			return (IDX);
		}
	}
	return (-1);
}
