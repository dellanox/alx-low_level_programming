#include "main.h"

/**
 * print_number - Prints an integer using _putchar function
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int scale = 1;
	int temp = n;

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

	while (temp > 9)
	{
		temp /= 10;
		scale *= 10;
	}

	while (scale > 0)
	{
		_putchar('0' + (n / scale));
		n %= scale;
		scale /= 10;
	}
}
