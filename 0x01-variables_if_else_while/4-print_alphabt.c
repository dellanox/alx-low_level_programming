#include <stdio.h>

/**
 * main - Entry point of this program
 *
 * Description: This program firstly prints the alphabet in lowercase,
 * excluding the letters 'q' and 'e', followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter; /* Variable to store the current letter */

	/* Loop through the alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		/* Check if the letter is not 'q' and not 'e' */
		if (letter != 'q' && letter != 'e')
		{
			/* Print the current letter */
			putchar(letter);
		}
	}

	/* Print a newline character */
	putchar('\n');

	return (0);
}
