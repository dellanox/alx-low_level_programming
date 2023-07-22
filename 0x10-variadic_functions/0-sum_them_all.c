#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	sum = va_arg(args, int) + sum_them_all(n - 1, args);

	va_end(args);

	return (sum);
}
