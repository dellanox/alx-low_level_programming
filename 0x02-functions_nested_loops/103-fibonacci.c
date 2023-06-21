#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Calculates the sum of the even-valued terms in the sequence
 * fibonacci sequence up to a given limit.
 *
 * Return: 0 on success
 */
int main(void)
{
	int term1 = 1;
	int term2 = 2;
	int sum = 0;
	int nextTerm = 0;

	while (term1 <= 4000000)
	{
		if (term1 % 2 == 0)
		{
			sum += term1;
		}

		nextTerm = term1 + term2;
		term1 = term2;
		term2 = nextTerm;
	}

	printf("%d\n", sum);

	return (0);

}
