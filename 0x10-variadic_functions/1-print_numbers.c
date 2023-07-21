#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: String to be printed between numbers.
 * @n: The number of integers passed in function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list holder;
	va_start(holder, n);

	for (i = 0; i < n; i++)

	{
		printf("%d", va_arg(holder, unsigned int));

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(holder);
	
	printf("\n");
}
