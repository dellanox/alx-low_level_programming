#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet in lowercase,
 *              followed by the alphabet in uppercase, and a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase;  /* Variable to store lowercase letters */
	char uppercase;  /* Variable to store uppercase letters */

	/* Print lowercase letters */
	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}

	/* Print uppercase letters */
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}

	putchar('\n');  /* Print newline character */

	return (0);
}
