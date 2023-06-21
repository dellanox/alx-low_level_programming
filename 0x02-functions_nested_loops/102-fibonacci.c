#include <stdio.h>

/**
 * printFib - Function to print Fibonacci series
 *
 * @n: Number of terms to print
 */
void printFib(int n)
{
	int prev1 = 1;
	int prev2 = 0;
	int i;
	int num;

	if (n < 1) {
		printf("Invalid number of terms\n");
		return;
	}

	printf("%d ", prev2);
	printf("%d ", prev1);

	for (i = 1; i <= n; i++) {
		num = prev1 + prev2;
		prev2 = prev1;
		prev1 = num;
		printf("%d ", num);
	}
}

int main()
{
	int n = 9;
	printFib(n);
	return 0;
}
