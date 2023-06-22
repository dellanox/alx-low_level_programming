#include "main.h"

/**
 * print_triangle - Prints a triangle using the # character with indentation
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int i, j, spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		spaces = size - i;

		for (j = 0; j < spaces; j++)
			_putchar(' ');

		for (j = 0; j < i; j++)
			_putchar('#');

		_putchar('\n');
	}
}
