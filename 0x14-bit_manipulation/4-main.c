#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int n;

	n = 1024;
	clear_bit(&n, 5);
	printf("%lu\n", n);
	n = 0;
	clear_bit(&n, 10);
	printf("%lu\n", n);
	n = 98;
	clear_bit(&n, 0);
	printf("%lu\n", n);

	return (0);
}
