#include <stdio.h>

/* Function to add two arrays and store the result in the third array*/
void addArrays(int result[], int arr1[], int arr2[], int size) {
	int carry = 0;
	for (int i = size - 1; i >= 0; i--) {
		int sum = arr1[i] + arr2[i] + carry;
		result[i] = sum % 10;
		carry = sum / 10;
	}
}

/* Function to print an array representing a number */
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i != size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

/* Function to print the first 50 Fibonacci numbers*/
void printFibonacciSeries() {
	const int size = 100; /*Max number of digits for Fibonacci numbers*/
	int fib1[size] = {0}; /*Initialize array with zeros*/
	int fib2[size] = {0};
	int fib3[size] = {0};

	fib1[size - 1] = 1; /* Initialize fib1 with 1 */
	fib2[size - 1] = 2; /* Initialize fib2 with 2 */

	printf("The first 50 Fibonacci numbers are: ");
	printArray(fib1, size);
	printf(", ");
	printArray(fib2, size);

	for (int i = 3; i <= 50; i++) {
		addArrays(fib3, fib1, fib2, size);
		printArray(fib3, size);

		// Shift the arrays to prepare for the next iteration
		for (int j = 0; j < size; j++) {
			fib1[j] = fib2[j];
			fib2[j] = fib3[j];
		}
	}
}

/* Driver code */
int main(void) {
	printFibonacciSeries();
	return (0);
}
