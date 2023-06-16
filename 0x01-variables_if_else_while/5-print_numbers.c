#include <stdio.h>

/**
 * main - This is the entry point of the program
 *
 * Description: This program prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number; /* Variable to store the current number */

	for (number = 0; number < 10; number++)
	{
	putchar(number + '0');
	}
	putchar('\n');

	return (0);
}
