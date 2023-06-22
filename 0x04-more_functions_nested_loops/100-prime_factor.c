#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a given number.
 * @number: The number to find the largest prime factor of.
 *
 * Return: The largest prime factor of the number.
 */
long largest_prime_factor(long number)
{
	long factor;

	while (number % 2 == 0)
		number /= 2;

	for (factor = 3; factor <= sqrt(number); factor += 2)
	{
		while (number % factor == 0)
		{
			number /= factor;
		}
	}

	if (number > 2)
	{
		return (number);
	}
	else
	{
		return (2);
	}

}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	long number = 612852475143;
	long largest_factor = largest_prime_factor(number);

	printf("%ld\n", largest_factor);

	return (0);
}
