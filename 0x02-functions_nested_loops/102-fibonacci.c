#include <stdio.h>

void fibonacciLoop(int n)
{
	int fibonacci[50];
	int i;
	fibonacci[0] = 1;
	fibonacci[1] = 2;

	if (n < 1) {
		printf("Invalid number of terms\n");
		return;
	}

	printf("%d, %d", fibonacci[0], fibonacci[1]);

	for (int i = 2; i < n; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		printf(", %d", fibonacci[i]);
	}

	printf("\n");
}

int main()
{
	int n = 50;
	fibonacciLoop(n);
	return 0;
}
