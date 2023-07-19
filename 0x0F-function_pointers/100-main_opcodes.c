#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the opcode printer program.
 *
 * print_opcodes - Print the opcodes of a function.
 * @num_bytes: The number of bytes to print.
 *
 * Return: Always 0 (The exit status of the program).
 */

void print_opcodes(int num_bytes);
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);

	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *fp = (unsigned char *)main;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", fp[i]);
	}
	printf("\n");

	return (0);
}
