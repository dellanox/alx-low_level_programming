#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the square matrix
 * @size: Size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++) {
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - i - 1)];
	}

	for (i = 0; i < size; i++) {
		_putchar('The sum of the first diagonal is: ');
		_putchar(sum1 + '0');
		_putchar('\n');
		_putchar('The sum of the second diagonal is: ');
		_putchar(sum2 + '0');
		_putchar('\n');
	}
}
