#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 50;
	int fibonacci[count];
	int i;

	// Initialize the first two Fibonacci numbers
	fibonacci[0] = 1;
	fibonacci[1] = 2;

	// Compute the remaining Fibonacci numbers
	for (i = 2; i < count; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	// Print the Fibonacci numbers
	for (i = 0; i < count; i++)
	{
		printf("%d", fibonacci[i]);

		// Add comma and space for all numbers except the last one
		if (i != count - 1)
			printf(", ");
	}

	printf("\n");

	return 0;
}
