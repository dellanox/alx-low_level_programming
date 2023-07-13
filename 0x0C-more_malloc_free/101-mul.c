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
	char *endptr;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = strtol(argv[1], &endptr, 10);
	if (*endptr != '\0')
	{
		printf("Error\n");
		exit(98);
	}

	num2 = strtol(argv[2], &endptr, 10);
	if (*endptr != '\0')
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", num1 * num2);

	return (0);
}
