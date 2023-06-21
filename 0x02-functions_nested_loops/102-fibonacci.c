#include <stdio.h>

int main(void)
{
	int first = 1;
	int second = 2;
	int next;
	int i;

	printf("The first 50 Fibonacci numbers are: ");
	for (i = 0; i < 50; i++) {
		next = first + second;
		printf("%d, ", next);
		first = second;
		second = next;
	}

	printf("\n");

	return 0;
}
