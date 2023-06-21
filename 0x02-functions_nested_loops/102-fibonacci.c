#include <stdio.h>

/**
 * fibonacciLoop - Function to print Fibonacci series
 *
 * @n: Number of terms to print
 */
void fibonacciLoop(int n)
{
	int prev1 = 1;
	int prev2 = 2;
	int num;
	int i;


	if (n < 1) {
		printf("Invalid number of terms\n");
		return;
	}

	printf("%d, %d", prev1, prev2);

	for (i = 3; i <= n; i++) {
		num = prev1 + prev2;
		printf(", %d", num);
		prev1 = prev2;
		prev2 = num;
	}


	printf("\n");
}

int main()
{
	int n = 50;
	fibonacciLoop(n);
	return 0;
}
