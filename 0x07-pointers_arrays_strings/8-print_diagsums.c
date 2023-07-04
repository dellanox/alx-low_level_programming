#include "main.h"
void print_number(int num);
void _putchar(char c);

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the square matrix
 * @size: Size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}

	print_number(sum1);
	_putchar(',');
	_putchar(' ');
	print_number(sum2);
	_putchar('\n');
}

/**
 * print_number - Prints a number using _putchar
 * @num: The number to be printed
 */
{
	int digit, copy, divisor = 1;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	copy = num;
	while (copy / 10)
	{
		divisor *= 10;
		copy /= 10;
	}

	while (divisor)
	{
		digit = num / divisor;
		_putchar(digit + '0');
		num %= divisor;
		divisor /= 10;
	}
}
