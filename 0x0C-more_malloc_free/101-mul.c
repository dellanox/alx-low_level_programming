#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (sscanf(argv[1], "%d", &num1) > 1 \
	    || sscanf(argv[2], "%d", &num2) > 1)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", num1 * num2);

	return (0);
}
