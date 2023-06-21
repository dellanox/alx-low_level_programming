#include <stdio.h>

/**
 * fibonacciLoop - Function to print Fibonacci series
 *
 * @n: Number of terms to print
 */
void fibonacciLoop(int n)
{
	long long prev1 = 1;
	long long prev2 = 2;
	long long num;
	int i;


	if (n < 1) {
		printf("Invalid number of terms\n");
		return;
	}

	printf("%lld, %lld", prev1, prev2);

	for (i = 3; i <= n; i++) {
		num = prev1 + prev2;
		printf(", %lld", num);
		prev1 = prev2;
		prev2 = num;
	}


	printf("\n");
}

int main()
{
	int n = 50;
	fibonacciLoop(n);
	return (0);
}
