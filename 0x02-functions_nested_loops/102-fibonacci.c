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
	int fibonacci[50];
	int i;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	for (i = 0; i < 50; i++)
	{
		printf("%d", fibonacci[i]);

		if (i != 49)
			printf(", ");
	}

	printf("\n");

	return 0;
}
