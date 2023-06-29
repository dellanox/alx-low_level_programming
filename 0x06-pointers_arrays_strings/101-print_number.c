#include "main.h"

/**
 * print_number - Prints an integer using _putchar function
 * @n: The integer to be printed
 */

void print_number(int n)
{
	int digits[10];
	int digit_count = 0;
	int i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n > 0)
	{
		digits[digit_count] = n % 10;
		digit_count++;
		n /= 10;
	}

	for (i = digit_count - 1; i >= 0; i--)
	{
		_putchar('0' + digits[i]);
	}
}
