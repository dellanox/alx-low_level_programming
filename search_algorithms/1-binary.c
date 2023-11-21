#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: -1
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t I, Left = 0, Right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	for (; Right >= Left;)
	{
		printf("Searching in array: ");
		for (I = Left; I < Right; I++)
		{
			printf("%d, ", array[I]);
		}
		printf("%d\n", array[I]);
		I = Left + (Right - Left) / 2;
		if (array[I] == value)
		{
			return (I);
		}
		if (array[I] > value)
		{
			Right = I - 1;
		}
		else
		{
			Left = I + 1;
		}
	}
	return (-1);
}
